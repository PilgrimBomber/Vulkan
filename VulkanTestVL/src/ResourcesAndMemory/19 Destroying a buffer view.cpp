#include "19 Destroying a buffer view.h"

namespace VulkanLibrary {

  void DestroyBufferView( VkDevice       logical_device,
                          VkBufferView & buffer_view ) {
    if( VK_NULL_HANDLE != buffer_view ) {
      vkDestroyBufferView( logical_device, buffer_view, nullptr );
      buffer_view = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
