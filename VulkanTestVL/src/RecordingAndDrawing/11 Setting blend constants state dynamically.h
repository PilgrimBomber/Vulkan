

#ifndef SETTING_BLEND_CONSTANTS_STATE_DYNAMICALLY
#define SETTING_BLEND_CONSTANTS_STATE_DYNAMICALLY

#include "common.h"

namespace VulkanLibrary {

  void SetBlendConstantsStateDynamically( VkCommandBuffer              command_buffer,
                                          std::array<float, 4> const & blend_constants );

} // namespace VulkanLibrary

#endif // SETTING_BLEND_CONSTANTS_STATE_DYNAMICALLY