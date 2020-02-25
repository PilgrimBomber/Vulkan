

#ifndef USING_STAGING_BUFFER_TO_UPDATE_A_BUFFER_WITH_A_DEVICE_LOCAL_MEMORY_BOUND
#define USING_STAGING_BUFFER_TO_UPDATE_A_BUFFER_WITH_A_DEVICE_LOCAL_MEMORY_BOUND

#include "common.h"

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
                                                                 std::vector<VkSemaphore>   signal_semaphores );

} // namespace VulkanLibrary

#endif // USING_STAGING_BUFFER_TO_UPDATE_A_BUFFER_WITH_A_DEVICE_LOCAL_MEMORY_BOUND