

#ifndef SELECTING_A_FORMAT_OF_SWAPCHAIN_IMAGES
#define SELECTING_A_FORMAT_OF_SWAPCHAIN_IMAGES

#include "common.h"

namespace VulkanLibrary {

  bool SelectFormatOfSwapchainImages( VkPhysicalDevice     physical_device,
                                      VkSurfaceKHR         presentation_surface,
                                      VkSurfaceFormatKHR   desired_surface_format,
                                      VkFormat           & image_format,
                                      VkColorSpaceKHR    & image_color_space );

} // namespace VulkanLibrary

#endif // SELECTING_A_FORMAT_OF_SWAPCHAIN_IMAGES