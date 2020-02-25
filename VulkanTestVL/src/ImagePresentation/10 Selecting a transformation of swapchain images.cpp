
#include "10 Selecting a transformation of swapchain images.h"

namespace VulkanLibrary {

  bool SelectTransformationOfSwapchainImages( VkSurfaceCapabilitiesKHR const & surface_capabilities,
                                              VkSurfaceTransformFlagBitsKHR    desired_transform,
                                              VkSurfaceTransformFlagBitsKHR  & surface_transform ) {
    if( surface_capabilities.supportedTransforms & desired_transform ) {
      surface_transform = desired_transform;
    } else {
      surface_transform = surface_capabilities.currentTransform;
    }
    return true;
  }

} // namespace VulkanLibrary
