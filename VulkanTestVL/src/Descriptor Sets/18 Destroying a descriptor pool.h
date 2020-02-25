

#ifndef DESTROYING_A_DESCRIPTOR_POOL
#define DESTROYING_A_DESCRIPTOR_POOL

#include "common.h"

namespace VulkanLibrary {

  void DestroyDescriptorPool( VkDevice           logical_device,
                              VkDescriptorPool & descriptor_pool );

} // namespace VulkanLibrary

#endif // DESTROYING_A_DESCRIPTOR_POOL