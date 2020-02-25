

#include "19 Destroying a command pool.h"

namespace VulkanLibrary {

  void DestroyCommandPool( VkDevice        logical_device,
                           VkCommandPool & command_pool ) {
    if( VK_NULL_HANDLE != command_pool ) {
      vkDestroyCommandPool( logical_device, command_pool, nullptr );
      command_pool = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
