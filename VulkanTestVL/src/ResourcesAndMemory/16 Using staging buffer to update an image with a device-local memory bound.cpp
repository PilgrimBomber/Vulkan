#include "03 Beginning a command buffer recording operation.h"
#include "04 Ending a command buffer recording operation.h"
#include "08 Creating a fence.h"
#include "09 Waiting for fences.h"
#include "11 Submitting command buffers to the queue.h"
#include "01 Creating a buffer.h"
#include "02 Allocating and binding memory object to a buffer.h"
#include "07 Setting an image memory barrier.h"
#include "11 Mapping, updating and unmapping host-visible memory.h"
#include "13 Copying data from a buffer to an image.h"
#include "16 Using staging buffer to update an image with a device-local memory bound.h"
#include "20 Freeing a memory object.h"
#include "21 Destroying a buffer.h"

namespace VulkanLibrary {

  bool UseStagingBufferToUpdateImageWithDeviceLocalMemoryBound( VkPhysicalDevice           physical_device,
                                                                VkDevice                   logical_device,
                                                                VkDeviceSize               data_size,
                                                                void                     * data,
                                                                VkImage                    destination_image,
                                                                VkImageSubresourceLayers   destination_image_subresource,
                                                                VkOffset3D                 destination_image_offset,
                                                                VkExtent3D                 destination_image_size,
                                                                VkImageLayout              destination_image_current_layout,
                                                                VkImageLayout              destination_image_new_layout,
                                                                VkAccessFlags              destination_image_current_access,
                                                                VkAccessFlags              destination_image_new_access,
                                                                VkImageAspectFlags         destination_image_aspect,
                                                                VkPipelineStageFlags       destination_image_generating_stages,
                                                                VkPipelineStageFlags       destination_image_consuming_stages,
                                                                VkQueue                    queue,
                                                                VkCommandBuffer            command_buffer,
                                                                std::vector<VkSemaphore>   signal_semaphores ) {

    VkDestroyer<VkBuffer> staging_buffer( logical_device );
    if( !CreateBuffer( logical_device, data_size, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, *staging_buffer ) ) {
      return false;
    }

    VkDestroyer<VkDeviceMemory> memory_object( logical_device );
    if( !AllocateAndBindMemoryObjectToBuffer( physical_device, logical_device, staging_buffer.Get(), VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT, *memory_object ) ) {
      return false;
    }

    if( !MapUpdateAndUnmapHostVisibleMemory( logical_device, memory_object.Get(), 0, data_size, data, true, nullptr ) ) {
      return false;
    }

    if( !BeginCommandBufferRecordingOperation( command_buffer, VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT, nullptr ) ) {
      return false;
    }

    SetImageMemoryBarrier( command_buffer, destination_image_generating_stages, VK_PIPELINE_STAGE_TRANSFER_BIT,
    {
      {
        destination_image,                        // VkImage            Image
        destination_image_current_access,         // VkAccessFlags      CurrentAccess
        VK_ACCESS_TRANSFER_WRITE_BIT,             // VkAccessFlags      NewAccess
        destination_image_current_layout,         // VkImageLayout      CurrentLayout
        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,     // VkImageLayout      NewLayout
        VK_QUEUE_FAMILY_IGNORED,                  // uint32_t           CurrentQueueFamily
        VK_QUEUE_FAMILY_IGNORED,                  // uint32_t           NewQueueFamily
        destination_image_aspect                  // VkImageAspectFlags Aspect
      } } );

    CopyDataFromBufferToImage( command_buffer, staging_buffer.Get(), destination_image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
    {
      {
        0,                                        // VkDeviceSize               bufferOffset
        0,                                        // uint32_t                   bufferRowLength
        0,                                        // uint32_t                   bufferImageHeight
        destination_image_subresource,            // VkImageSubresourceLayers   imageSubresource
        destination_image_offset,                 // VkOffset3D                 imageOffset
        destination_image_size,                   // VkExtent3D                 imageExtent
      } } );

    SetImageMemoryBarrier( command_buffer, VK_PIPELINE_STAGE_TRANSFER_BIT, destination_image_consuming_stages,
    {
      {
        destination_image,                        // VkImage            Image
        VK_ACCESS_TRANSFER_WRITE_BIT,             // VkAccessFlags      CurrentAccess
        destination_image_new_access,             // VkAccessFlags      NewAccess
        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,     // VkImageLayout      CurrentLayout
        destination_image_new_layout,             // VkImageLayout      NewLayout
        VK_QUEUE_FAMILY_IGNORED,                  // uint32_t           CurrentQueueFamily
        VK_QUEUE_FAMILY_IGNORED,                  // uint32_t           NewQueueFamily
        destination_image_aspect                  // VkImageAspectFlags Aspect
      } } );

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

    if( !WaitForFences( logical_device, { fence.Get() }, VK_FALSE, 500000000 ) ) {
      return false;
    }

    return true;
  }

} // namespace VulkanLibrary
