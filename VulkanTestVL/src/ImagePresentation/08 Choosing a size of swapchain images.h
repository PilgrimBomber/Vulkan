#ifndef CHOOSING_A_SIZE_OF_SWAPCHAIN_IMAGES
#define CHOOSING_A_SIZE_OF_SWAPCHAIN_IMAGES

#include "common.h"

namespace VulkanLibrary {

  bool ChooseSizeOfSwapchainImages( VkSurfaceCapabilitiesKHR const & surface_capabilities,
                                    VkExtent2D                     & size_of_images );

} // namespace VulkanLibrary

#endif // CHOOSING_A_SIZE_OF_SWAPCHAIN_IMAGES