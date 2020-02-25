

#ifndef CREATING_A_SWAPCHAIN_WITH_R8G8B8A8_FORMAT_AND_A_MAILBOX_PRESENT_MODE
#define CREATING_A_SWAPCHAIN_WITH_R8G8B8A8_FORMAT_AND_A_MAILBOX_PRESENT_MODE

#include "common.h"

namespace VulkanLibrary {

  bool CreateSwapchainWithR8G8B8A8FormatAndMailboxPresentMode( VkPhysicalDevice       physical_device,
                                                               VkSurfaceKHR           presentation_surface,
                                                               VkDevice               logical_device,
                                                               VkImageUsageFlags      swapchain_image_usage,
                                                               VkExtent2D           & image_size,
                                                               VkFormat             & image_format,
                                                               VkSwapchainKHR       & old_swapchain,
                                                               VkSwapchainKHR       & swapchain,
                                                               std::vector<VkImage> & swapchain_images  );

} // namespace VulkanLibrary

#endif // CREATING_A_SWAPCHAIN_WITH_R8G8B8A8_FORMAT_AND_A_MAILBOX_PRESENT_MODE