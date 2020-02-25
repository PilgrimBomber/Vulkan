#include "03 Beginning a command buffer recording operation.h"
#include "04 Ending a command buffer recording operation.h"
#include "08 Creating a fence.h"
#include "09 Waiting for fences.h"
#include "11 Submitting command buffers to the queue.h"
#include "01 Creating a buffer.h"
#include "02 Allocating and binding memory object to a buffer.h"
#include "03 Setting a buffer memory barrier.h"
#include "11 Mapping, updating and unmapping host-visible memory.h"
#include "12 Copying data between buffers.h"
#include "15 Using staging buffer to update a buffer with a device-local memory bound.h"
#include "20 Freeing a memory object.h"
#include "21 Destroying a buffer.h"

namespace VulkanLibrary {

  bool UseStagingBufferToUpdateBufferWithDeviceLocalMemoryBound( VkPhysicalDevice           physical_device,
                                                                 VkDevice                   logical_device,
                                                                 VkDeviceSize               data_size,
                                                                 void                     * data,
                                                                 VkBuffer                   destination_buffer,
                                                                 VkDeviceSize               destination_offset,
                                                                 VkAccessFlags              destination_buffer_current_access,
                                                                 VkAccessFlags              destination_buffer_new_access,
                                                                 VkPipelineStageFlags       destination_buffer_generating_stages,
                                                                 VkPipelineStageFlags       destination_buffer_consuming_stages,
                                                                 VkQueue                    queue,
                                                                 VkCommandBuffer            command_buffer,
                                                                 std::vector<VkSemaphore>   signal_semaphores ) {

    VkDestroyer<VkBuffer> staging_buffer( logical_device );
    if( !CreateBuffer( logical_device, data_size, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, *staging_buffer ) ) {
      return false;
    }

    VkDestroyer<VkDeviceMemory> memory_object( logical_device );
    if( !AllocateAndBindMemoryObjectToBuffer( physical_device, logical_device, *staging_buffer, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT, *memory_object ) ) {
      return false;
    }

    if( !MapUpdateAndUnmapHostVisibleMemory( logical_device, *memory_object, 0, data_size, data, true, nullptr ) ) {
      return false;
    }

    if( !BeginCommandBufferRecordingOperation( command_buffer, VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT, nullptr ) ) {
      return false;
    }

    SetBufferMemoryBarrier( command_buffer, destination_buffer_generating_stages, VK_PIPELINE_STAGE_TRANSFER_BIT, { { destination_buffer, destination_buffer_current_access, VK_ACCESS_TRANSFER_WRITE_BIT, VK_QUEUE_FAMILY_IGNORED, VK_QUEUE_FAMILY_IGNORED } } );

    CopyDataBetweenBuffers( command_buffer, *staging_buffer, destination_buffer, { { 0, destination_offset, data_size } } );

    SetBufferMemoryBarrier( command_buffer, VK_PIPELINE_STAGE_TRANSFER_BIT, destination_buffer_consuming_stages, { { destination_buffer, VK_ACCESS_TRANSFER_WRITE_BIT, destination_buffer_new_access, VK_QUEUE_FAMILY_IGNORED, VK_QUEUE_FAMILY_IGNORED } } );

    if( !EndCommandBufferRecordingOperation( command_buffer ) ) {
      return false;
    }

    VkDestroyer<VkFence> fence( logical_device );
    if( !CreateFence( logical_device, false, *fence ) ) {
      return false;
    }

    if( !SubmitCommandBuffersToQueue( queue, {}, { command_buffer }, signal_semaphores, *fence ) ) {
      return false;
    }

    if( !WaitForFences( logical_device, { *fence }, VK_FALSE, 500000000 ) ) {
      return false;
    }

    return true;
  }

} // namespace VulkanLibrary
