#ifndef DESTROYING_A_SWAPCHAIN
#define DESTROYING_A_SWAPCHAIN

#include "common.h"

namespace VulkanLibrary {

  void DestroySwapchain( VkDevice         logical_device,
                         VkSwapchainKHR & swapchain );

} // namespace VulkanLibrary

#endif // DESTROYING_A_SWAPCHAIN