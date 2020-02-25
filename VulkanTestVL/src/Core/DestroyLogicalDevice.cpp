#include "DestroyLogicalDevice.h"



#include "DestroyLogicalDevice.h"


namespace VulkanLibrary {

  void DestroyLogicalDevice( VkDevice & logical_device ) {
    if( logical_device ) {
      vkDestroyDevice( logical_device, nullptr );
      logical_device = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
