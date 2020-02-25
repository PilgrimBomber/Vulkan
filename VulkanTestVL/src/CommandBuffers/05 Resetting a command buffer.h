#ifndef RESETTING_A_COMMAND_BUFFER
#define RESETTING_A_COMMAND_BUFFER

#include "common.h"

namespace VulkanLibrary {

  bool ResetCommandBuffer( VkCommandBuffer command_buffer,
                           bool            release_resources );

} // namespace VulkanLibrary

#endif // RESETTING_A_COMMAND_BUFFER