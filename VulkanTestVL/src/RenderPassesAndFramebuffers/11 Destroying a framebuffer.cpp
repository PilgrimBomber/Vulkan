

#include "11 Destroying a framebuffer.h"

namespace VulkanLibrary {

  void DestroyFramebuffer( VkDevice        logical_device,
                           VkFramebuffer & framebuffer ) {
    if( VK_NULL_HANDLE != framebuffer ) {
      vkDestroyFramebuffer( logical_device, framebuffer, nullptr );
      framebuffer = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
