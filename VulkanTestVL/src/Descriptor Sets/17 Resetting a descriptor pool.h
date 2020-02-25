

#ifndef RESETTING_A_DESCRIPTOR_POOL
#define RESETTING_A_DESCRIPTOR_POOL

#include "common.h"

namespace VulkanLibrary {

  bool ResetDescriptorPool( VkDevice          logical_device,
                            VkDescriptorPool  descriptor_pool );

} // namespace VulkanLibrary

#endif // RESETTING_A_DESCRIPTOR_POOL