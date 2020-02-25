

#include "07 Setting viewport state dynamically.h"

namespace VulkanLibrary {

  void SetViewportStateDynamically( VkCommandBuffer                 command_buffer,
                                    uint32_t                        first_viewport,
                                    std::vector<VkViewport> const & viewports ) {
    vkCmdSetViewport( command_buffer, first_viewport, static_cast<uint32_t>(viewports.size()), viewports.data() );
  }

} // namespace VulkanLibrary
