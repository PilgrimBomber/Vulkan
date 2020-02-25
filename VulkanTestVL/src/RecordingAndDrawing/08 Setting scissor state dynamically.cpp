

#include "08 Setting scissor state dynamically.h"

namespace VulkanLibrary {

  void SetScissorStateDynamically( VkCommandBuffer               command_buffer,
                                    uint32_t                      first_scissor,
                                    std::vector<VkRect2D> const & scissors ) {
    vkCmdSetScissor( command_buffer, first_scissor, static_cast<uint32_t>(scissors.size()), scissors.data() );
  }

} // namespace VulkanLibrary
