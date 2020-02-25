

#include "17 Destroying a semaphore.h"

namespace VulkanLibrary {

  void DestroySemaphore( VkDevice      logical_device,
                         VkSemaphore & semaphore ) {
    if( VK_NULL_HANDLE != semaphore ) {
      vkDestroySemaphore( logical_device, semaphore, nullptr );
      semaphore = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
