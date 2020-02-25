

#include "09 Setting line width state dynamically.h"

namespace VulkanLibrary {

  void SetLineWidthStateDynamically( VkCommandBuffer command_buffer,
                                     float           line_width ) {
    vkCmdSetLineWidth( command_buffer, line_width );
  }

} // namespace VulkanLibrary
