#ifndef RESETTING_A_COMMAND_POOL
#define RESETTING_A_COMMAND_POOL

#include "common.h"

namespace VulkanLibrary {

  bool ResetCommandPool( VkDevice      logical_device,
                         VkCommandPool command_pool,
                         bool          release_resources );

} // namespace VulkanLibrary

#endif // RESETTING_A_COMMAND_POOL