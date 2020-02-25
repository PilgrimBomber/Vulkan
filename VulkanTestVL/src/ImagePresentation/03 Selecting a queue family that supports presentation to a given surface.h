#ifndef SELECTING_A_QUEUE_FAMILY_THAT_SUPPORTS_PRESENTATION_TO_A_GIVEN_SURFACE
#define SELECTING_A_QUEUE_FAMILY_THAT_SUPPORTS_PRESENTATION_TO_A_GIVEN_SURFACE

#include "common.h"

namespace VulkanLibrary {

  bool SelectQueueFamilyThatSupportsPresentationToGivenSurface( VkPhysicalDevice   physical_device,
                                                                VkSurfaceKHR       presentation_surface,
                                                                uint32_t         & queue_family_index );

} // namespace VulkanLibrary

#endif // SELECTING_A_QUEUE_FAMILY_THAT_SUPPORTS_PRESENTATION_TO_A_GIVEN_SURFACE