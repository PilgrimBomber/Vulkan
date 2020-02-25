#include "20 Freeing a memory object.h"

namespace VulkanLibrary {

  void FreeMemoryObject( VkDevice         logical_device,
                         VkDeviceMemory & memory_object ) {
    if( VK_NULL_HANDLE != memory_object ) {
      vkFreeMemory( logical_device, memory_object, nullptr );
      memory_object = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
