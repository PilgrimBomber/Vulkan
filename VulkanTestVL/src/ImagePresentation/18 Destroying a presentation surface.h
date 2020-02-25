#ifndef DESTROYING_A_PRESENTATION_SURFACE
#define DESTROYING_A_PRESENTATION_SURFACE

#include "common.h"

namespace VulkanLibrary {

  void DestroyPresentationSurface( VkInstance     instance,
                                   VkSurfaceKHR & presentation_surface );

} // namespace VulkanLibrary

#endif // DESTROYING_A_PRESENTATION_SURFACE