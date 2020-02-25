#ifndef CREATING_A_UNIFORM_BUFFER
#define CREATING_A_UNIFORM_BUFFER

#include "common.h"

namespace VulkanLibrary {

  bool CreateUniformBuffer( VkPhysicalDevice     physical_device,
                            VkDevice             logical_device,
                            VkDeviceSize         size,
                            VkBufferUsageFlags   usage,
                            VkBuffer           & uniform_buffer,
                            VkDeviceMemory     & memory_object );

} // namespace VulkanLibrary

#endif // CREATING_A_UNIFORM_BUFFER