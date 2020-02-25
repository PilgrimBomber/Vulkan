#ifndef CREATING_A_UNIFORM_TEXEL_BUFFER
#define CREATING_A_UNIFORM_TEXEL_BUFFER

#include "common.h"

namespace VulkanLibrary {

  bool CreateUniformTexelBuffer( VkPhysicalDevice     physical_device,
                                 VkDevice             logical_device,
                                 VkFormat             format,
                                 VkDeviceSize         size,
                                 VkImageUsageFlags    usage,
                                 VkBuffer           & uniform_texel_buffer,
                                 VkDeviceMemory     & memory_object,
                                 VkBufferView       & uniform_texel_buffer_view );

} // namespace VulkanLibrary

#endif // CREATING_A_UNIFORM_TEXEL_BUFFER