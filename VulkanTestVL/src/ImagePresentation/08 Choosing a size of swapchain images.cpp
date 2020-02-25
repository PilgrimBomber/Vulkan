

#include "08 Choosing a size of swapchain images.h"

namespace VulkanLibrary {

  bool ChooseSizeOfSwapchainImages( VkSurfaceCapabilitiesKHR const & surface_capabilities,
                                    VkExtent2D                     & size_of_images ) {
    if( 0xFFFFFFFF == surface_capabilities.currentExtent.width ) {
      size_of_images = { 640, 480 };

      if( size_of_images.width < surface_capabilities.minImageExtent.width ) {
        size_of_images.width = surface_capabilities.minImageExtent.width;
      } else if( size_of_images.width > surface_capabilities.maxImageExtent.width ) {
        size_of_images.width = surface_capabilities.maxImageExtent.width;
      }

      if( size_of_images.height < surface_capabilities.minImageExtent.height ) {
        size_of_images.height = surface_capabilities.minImageExtent.height;
      } else if( size_of_images.height > surface_capabilities.maxImageExtent.height ) {
        size_of_images.height = surface_capabilities.maxImageExtent.height;
      }
    } else {
      size_of_images = surface_capabilities.currentExtent;
    }
    return true;
  }

} // namespace VulkanLibrary
