#include "15 Executing secondary command buffer inside a primary command buffer.h"

namespace VulkanLibrary {

  void ExecuteSecondaryCommandBufferInsidePrimaryCommandBuffer( VkCommandBuffer                      command_buffer,
                                                                std::vector<VkCommandBuffer> const & secondary_command_buffers ) {
    if( secondary_command_buffers.size() > 0 ) {
      vkCmdExecuteCommands( command_buffer, static_cast<uint32_t>(secondary_command_buffers.size()), secondary_command_buffers.data() );
    }
  }

} // namespace VulkanLibrary
