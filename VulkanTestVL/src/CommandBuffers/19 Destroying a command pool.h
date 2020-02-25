#ifndef DESTROYING_A_COMMAND_POOL
#define DESTROYING_A_COMMAND_POOL

#include "common.h"

namespace VulkanLibrary {

  void DestroyCommandPool( VkDevice        logical_device,
                           VkCommandPool & command_pool );

} // namespace VulkanLibrary

#endif // DESTROYING_A_COMMAND_POOL