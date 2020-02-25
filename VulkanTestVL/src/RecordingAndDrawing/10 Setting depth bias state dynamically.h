

#ifndef SETTING_DEPTH_BIAS_STATE_DYNAMICALLY
#define SETTING_DEPTH_BIAS_STATE_DYNAMICALLY

#include "common.h"

namespace VulkanLibrary {

  void SetDepthBiasStateDynamically( VkCommandBuffer command_buffer,
                                     float           constant_factor,
                                     float           clamp_value,
                                     float           slope_factor );

} // namespace VulkanLibrary

#endif // SETTING_DEPTH_BIAS_STATE_DYNAMICALLY