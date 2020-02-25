#include "17 Destroying a swapchain.h"

namespace VulkanLibrary {

  void DestroySwapchain( VkDevice         logical_device,
                         VkSwapchainKHR & swapchain ) {
    if( swapchain ) {
      vkDestroySwapchainKHR( logical_device, swapchain, nullptr );
      swapchain = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
