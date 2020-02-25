
#ifndef SELECTING_A_TRANSFORMATION_OF_SWAPCHAIN_IMAGES
#define SELECTING_A_TRANSFORMATION_OF_SWAPCHAIN_IMAGES

#include "common.h"

namespace VulkanLibrary {

  bool SelectTransformationOfSwapchainImages( VkSurfaceCapabilitiesKHR const & surface_capabilities,
                                              VkSurfaceTransformFlagBitsKHR    desired_transform,
                                              VkSurfaceTransformFlagBitsKHR  & surface_transform );

} // namespace VulkanLibrary

#endif // SELECTING_A_TRANSFORMATION_OF_SWAPCHAIN_IMAGES