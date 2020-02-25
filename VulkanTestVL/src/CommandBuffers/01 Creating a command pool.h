
#ifndef CREATING_A_COMMAND_POOL
#define CREATING_A_COMMAND_POOL

#include "common.h"

namespace VulkanLibrary {

  bool CreateCommandPool( VkDevice                   logical_device,
                          VkCommandPoolCreateFlags   command_pool_flags,
                          uint32_t                   queue_family,
                          VkCommandPool            & command_pool );

} // namespace VulkanLibrary

#endif // CREATING_A_COMMAND_POOL