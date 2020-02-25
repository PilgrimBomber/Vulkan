#include "DestroyVulkanInstance.h"


namespace VulkanLibrary {

  void DestroyVulkanInstance( VkInstance & instance ) {
    if( instance ) {
      vkDestroyInstance( instance, nullptr );
      instance = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
