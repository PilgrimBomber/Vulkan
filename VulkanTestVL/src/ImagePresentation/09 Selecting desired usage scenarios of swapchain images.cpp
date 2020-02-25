

#include "09 Selecting desired usage scenarios of swapchain images.h"

namespace VulkanLibrary {

  bool SelectDesiredUsageScenariosOfSwapchainImages( VkSurfaceCapabilitiesKHR const & surface_capabilities,
                                                     VkImageUsageFlags                desired_usages,
                                                     VkImageUsageFlags              & image_usage ) {
    image_usage = desired_usages & surface_capabilities.supportedUsageFlags;

    return desired_usages == image_usage;
  }

} // namespace VulkanLibrary
