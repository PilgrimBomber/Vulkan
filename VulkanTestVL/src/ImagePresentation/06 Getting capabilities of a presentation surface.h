
#ifndef GETTING_CAPABILITIES_OF_A_PRESENTATION_SURFACE
#define GETTING_CAPABILITIES_OF_A_PRESENTATION_SURFACE

#include "common.h"

namespace VulkanLibrary {

  bool GetCapabilitiesOfPresentationSurface( VkPhysicalDevice           physical_device,
                                             VkSurfaceKHR               presentation_surface,
                                             VkSurfaceCapabilitiesKHR & surface_capabilities );

} // namespace VulkanLibrary

#endif // GETTING_CAPABILITIES_OF_A_PRESENTATION_SURFACE