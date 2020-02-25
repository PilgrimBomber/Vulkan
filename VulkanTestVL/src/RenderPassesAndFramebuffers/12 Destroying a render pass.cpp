
#include "12 Destroying a render pass.h"

namespace VulkanLibrary {

  void DestroyRenderPass( VkDevice       logical_device,
                          VkRenderPass & render_pass ) {
    if( VK_NULL_HANDLE != render_pass ) {
      vkDestroyRenderPass( logical_device, render_pass, nullptr );
      render_pass = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
