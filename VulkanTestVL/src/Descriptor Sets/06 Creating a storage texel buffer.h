#ifndef CREATING_A_STORAGE_TEXEL_BUFFER
#define CREATING_A_STORAGE_TEXEL_BUFFER

#include "common.h"

namespace VulkanLibrary {

  bool CreateStorageTexelBuffer( VkPhysicalDevice     physical_device,
                                 VkDevice             logical_device,
                                 VkFormat             format,
                                 VkDeviceSize         size,
                                 VkBufferUsageFlags   usage,
                                 bool                 atomic_operations,
                                 VkBuffer           & storage_texel_buffer,
                                 VkDeviceMemory     & memory_object,
                                 VkBufferView       & storage_texel_buffer_view );

} // namespace VulkanLibrary

#endif // CREATING_A_STORAGE_TEXEL_BUFFER