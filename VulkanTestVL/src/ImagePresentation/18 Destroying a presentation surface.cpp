#include "18 Destroying a presentation surface.h"

namespace VulkanLibrary {

  void DestroyPresentationSurface( VkInstance     instance,
                                   VkSurfaceKHR & presentation_surface ) {
    if( presentation_surface ) {
      vkDestroySurfaceKHR( instance, presentation_surface, nullptr );
      presentation_surface = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
