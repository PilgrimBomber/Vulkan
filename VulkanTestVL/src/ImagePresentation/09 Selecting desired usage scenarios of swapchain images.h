
#ifndef SELECTING_DESIRED_USAGE_SCENARIOS_OF_SWAPCHAIN_IMAGES
#define SELECTING_DESIRED_USAGE_SCENARIOS_OF_SWAPCHAIN_IMAGES

#include "common.h"

namespace VulkanLibrary {

  bool SelectDesiredUsageScenariosOfSwapchainImages( VkSurfaceCapabilitiesKHR const & surface_capabilities,
                                                     VkImageUsageFlags                desired_usages,
                                                     VkImageUsageFlags              & image_usage );

} // namespace VulkanLibrary

#endif // SELECTING_DESIRED_USAGE_SCENARIOS_OF_SWAPCHAIN_IMAGES