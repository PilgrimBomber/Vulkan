
#ifndef CREATING_A_STORAGE_BUFFER
#define CREATING_A_STORAGE_BUFFER

#include "common.h"

namespace VulkanLibrary {

  bool CreateStorageBuffer( VkPhysicalDevice     physical_device,
                            VkDevice             logical_device,
                            VkDeviceSize         size,
                            VkBufferUsageFlags   usage,
                            VkBuffer           & storage_buffer,
                            VkDeviceMemory     & memory_object );

} // namespace VulkanLibrary

#endif // CREATING_A_STORAGE_BUFFER