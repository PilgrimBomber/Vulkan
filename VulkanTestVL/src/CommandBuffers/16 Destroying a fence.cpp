

#include "16 Destroying a fence.h"

namespace VulkanLibrary {

  void DestroyFence( VkDevice   logical_device,
                     VkFence  & fence ) {
    if( VK_NULL_HANDLE != fence ) {
      vkDestroyFence( logical_device, fence, nullptr );
      fence = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
