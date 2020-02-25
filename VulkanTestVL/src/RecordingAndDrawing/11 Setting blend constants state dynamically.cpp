
#include "11 Setting blend constants state dynamically.h"

namespace VulkanLibrary {

  void SetBlendConstantsStateDynamically( VkCommandBuffer              command_buffer,
                                          std::array<float, 4> const & blend_constants ) {
    vkCmdSetBlendConstants( command_buffer, blend_constants.data() );
  }

} // namespace VulkanLibrary
