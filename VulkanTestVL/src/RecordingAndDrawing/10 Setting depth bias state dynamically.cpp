

#include "10 Setting depth bias state dynamically.h"

namespace VulkanLibrary {

  void SetDepthBiasStateDynamically( VkCommandBuffer command_buffer,
                                     float           constant_factor,
                                     float           clamp,
                                     float           slope_factor ) {
    vkCmdSetDepthBias( command_buffer, constant_factor, clamp, slope_factor );
  }

} // namespace VulkanLibrary
