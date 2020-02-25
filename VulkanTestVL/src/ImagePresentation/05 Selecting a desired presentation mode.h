
#ifndef SELECTING_A_DESIRED_PRESENTATION_MODE
#define SELECTING_A_DESIRED_PRESENTATION_MODE

#include "common.h"

namespace VulkanLibrary {

  bool SelectDesiredPresentationMode( VkPhysicalDevice   physical_device,
                                      VkSurfaceKHR       presentation_surface,
                                      VkPresentModeKHR   desired_present_mode,
                                      VkPresentModeKHR & present_mode );

} // namespace VulkanLibrary

#endif // SELECTING_A_DESIRED_PRESENTATION_MODE