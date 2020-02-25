
#ifndef ACQUIRING_A_SWAPCHAIN_IMAGE
#define ACQUIRING_A_SWAPCHAIN_IMAGE

#include "common.h"

namespace VulkanLibrary {

  bool AcquireSwapchainImage( VkDevice         logical_device,
                              VkSwapchainKHR   swapchain,
                              VkSemaphore      semaphore,
                              VkFence          fence,
                              uint32_t       & image_index );

} // namespace VulkanLibrary

#endif // ACQUIRING_A_SWAPCHAIN_IMAGE