
#ifndef DESTROYING_A_BUFFER
#define DESTROYING_A_BUFFER

#include "common.h"

namespace VulkanLibrary {

  void DestroyBuffer( VkDevice   logical_device,
                      VkBuffer & buffer );

} // namespace VulkanLibrary

#endif // DESTROYING_A_BUFFER