

#ifndef GETTING_HANDLES_OF_SWAPCHAIN_IMAGES
#define GETTING_HANDLES_OF_SWAPCHAIN_IMAGES

#include "common.h"

namespace VulkanLibrary {

  bool GetHandlesOfSwapchainImages( VkDevice               logical_device,
                                    VkSwapchainKHR         swapchain,
                                    std::vector<VkImage> & swapchain_images );

} // namespace VulkanLibrary

#endif // GETTING_HANDLES_OF_SWAPCHAIN_IMAGES