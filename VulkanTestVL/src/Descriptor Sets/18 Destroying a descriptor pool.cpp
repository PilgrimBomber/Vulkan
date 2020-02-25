

#include "18 Destroying a descriptor pool.h"

namespace VulkanLibrary {

  void DestroyDescriptorPool( VkDevice           logical_device,
                              VkDescriptorPool & descriptor_pool ) {
    if( VK_NULL_HANDLE != descriptor_pool ) {
      vkDestroyDescriptorPool( logical_device, descriptor_pool, nullptr );
      descriptor_pool = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
