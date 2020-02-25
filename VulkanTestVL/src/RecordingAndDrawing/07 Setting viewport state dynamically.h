

#ifndef SETTING_VIEWPORT_STATE_DYNAMICALLY
#define SETTING_VIEWPORT_STATE_DYNAMICALLY

#include "common.h"

namespace VulkanLibrary {

  void SetViewportStateDynamically( VkCommandBuffer                 command_buffer,
                                    uint32_t                        first_viewport,
                                    std::vector<VkViewport> const & viewports );

} // namespace VulkanLibrary

#endif // SETTING_VIEWPORT_STATE_DYNAMICALLY