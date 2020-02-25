
#include "07 Selecting a number of swapchain images.h"

namespace VulkanLibrary {

  bool SelectNumberOfSwapchainImages( VkSurfaceCapabilitiesKHR const & surface_capabilities,
                                      uint32_t                       & number_of_images ) {
    number_of_images = surface_capabilities.minImageCount + 1;
    if( (surface_capabilities.maxImageCount > 0) &&
        (number_of_images > surface_capabilities.maxImageCount) ) {
      number_of_images = surface_capabilities.maxImageCount;
    }
    return true;
  }

} // namespace VulkanLibrary
