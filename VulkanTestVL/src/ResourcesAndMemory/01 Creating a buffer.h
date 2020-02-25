
#ifndef CREATING_A_BUFFER
#define CREATING_A_BUFFER

#include "common.h"

namespace VulkanLibrary {

  bool CreateBuffer( VkDevice             logical_device,
                     VkDeviceSize         size,
                     VkBufferUsageFlags   usage,
                     VkBuffer           & buffer );

} // namespace VulkanLibrary

#endif // CREATING_A_BUFFER