
#ifndef EXECUTING_SECONDARY_COMMAND_BUFFER_INSIDE_A_PRIMARY_COMMAND_BUFFER
#define EXECUTING_SECONDARY_COMMAND_BUFFER_INSIDE_A_PRIMARY_COMMAND_BUFFER

#include "common.h"

namespace VulkanLibrary {

  void ExecuteSecondaryCommandBufferInsidePrimaryCommandBuffer( VkCommandBuffer                      primary_command_buffer,
                                                                std::vector<VkCommandBuffer> const & secondary_command_buffers );

} // namespace VulkanLibrary

#endif // EXECUTING_SECONDARY_COMMAND_BUFFER_INSIDE_A_PRIMARY_COMMAND_BUFFER