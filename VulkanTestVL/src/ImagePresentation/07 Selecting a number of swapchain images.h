
#ifndef SELECTING_A_NUMBER_OF_SWAPCHAIN_IMAGES
#define SELECTING_A_NUMBER_OF_SWAPCHAIN_IMAGES

#include "common.h"

namespace VulkanLibrary {

  bool SelectNumberOfSwapchainImages( VkSurfaceCapabilitiesKHR const & surface_capabilities,
                                      uint32_t                       & number_of_images );

} // namespace VulkanLibrary

#endif // SELECTING_A_NUMBER_OF_SWAPCHAIN_IMAGES