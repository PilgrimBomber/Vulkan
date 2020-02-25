
#ifndef CREATING_A_PRESENTATION_SURFACE
#define CREATING_A_PRESENTATION_SURFACE

#include "common.h"

namespace VulkanLibrary {

  bool CreatePresentationSurface( VkInstance         instance,
                                  WindowParameters   window_parameters,
                                  VkSurfaceKHR     & presentation_surface );

} // namespace VulkanLibrary

#endif // CREATING_A_PRESENTATION_SURFACE