

#include "10 Ending a render pass.h"

namespace VulkanLibrary {

  void EndRenderPass( VkCommandBuffer command_buffer ) {
    vkCmdEndRenderPass( command_buffer );
  }

} // namespace VulkanLibrary
