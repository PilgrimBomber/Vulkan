

#ifndef SETTING_SCISSORS_STATE_DYNAMICALLY
#define SETTING_SCISSORS_STATE_DYNAMICALLY

#include "common.h"

namespace VulkanLibrary {

  void SetScissorStateDynamically( VkCommandBuffer               command_buffer,
                                    uint32_t                      first_scissor,
                                    std::vector<VkRect2D> const & scissors );

} // namespace VulkanLibrary

#endif // SETTING_SCISSORS_STATE_DYNAMICALLY