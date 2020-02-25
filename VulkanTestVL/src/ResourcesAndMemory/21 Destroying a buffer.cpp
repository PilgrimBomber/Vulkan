#include "21 Destroying a buffer.h"

namespace VulkanLibrary {

  void DestroyBuffer( VkDevice   logical_device,
                      VkBuffer & buffer ) {
    if( VK_NULL_HANDLE != buffer ) {
      vkDestroyBuffer( logical_device, buffer, nullptr );
      buffer = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
