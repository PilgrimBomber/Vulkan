
#include "06 Getting capabilities of a presentation surface.h"

namespace VulkanLibrary {

  bool GetCapabilitiesOfPresentationSurface( VkPhysicalDevice           physical_device,
                                             VkSurfaceKHR               presentation_surface,
                                             VkSurfaceCapabilitiesKHR & surface_capabilities ) {
    VkResult result = vkGetPhysicalDeviceSurfaceCapabilitiesKHR( physical_device, presentation_surface, &surface_capabilities );

    if( VK_SUCCESS != result ) {
      std::cout << "Could not get the capabilities of a presentation surface." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
