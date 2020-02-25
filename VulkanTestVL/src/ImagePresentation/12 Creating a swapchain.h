

#ifndef CREATING_A_SWAPCHAIN
#define CREATING_A_SWAPCHAIN

#include "common.h"

namespace VulkanLibrary {

  bool CreateSwapchain( VkDevice                        logical_device,
                        VkSurfaceKHR                    presentation_surface,
                        uint32_t                        image_count,
                        VkSurfaceFormatKHR              surface_format,
                        VkExtent2D                      image_size,
                        VkImageUsageFlags               image_usage,
                        VkSurfaceTransformFlagBitsKHR   surface_transform,
                        VkPresentModeKHR                present_mode,
                        VkSwapchainKHR                & old_swapchain,
                        VkSwapchainKHR                & swapchain );

} // namespace VulkanLibrary

#endif // CREATING_A_SWAPCHAIN