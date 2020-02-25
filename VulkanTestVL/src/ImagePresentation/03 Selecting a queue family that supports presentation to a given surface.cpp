#include "GetPropsPhysDevice.h"
#include "03 Selecting a queue family that supports presentation to a given surface.h"

namespace VulkanLibrary {

  bool SelectQueueFamilyThatSupportsPresentationToGivenSurface( VkPhysicalDevice   physical_device,
                                                                VkSurfaceKHR       presentation_surface,
                                                                uint32_t         & queue_family_index ) {
    std::vector<VkQueueFamilyProperties> queue_families;
    if( !CheckAvailableQueueFamiliesAndTheirProperties( physical_device, queue_families ) ) {
      return false;
    }

    for( uint32_t index = 0; index < static_cast<uint32_t>(queue_families.size()); ++index ) {
      VkBool32 presentation_supported = VK_FALSE;
      VkResult result = vkGetPhysicalDeviceSurfaceSupportKHR( physical_device, index, presentation_surface, &presentation_supported );
      if( (VK_SUCCESS == result) &&
          (VK_TRUE == presentation_supported) ) {
        queue_family_index = index;
        return true;
      }
    }
    return false;
  }

} // namespace VulkanLibrary
