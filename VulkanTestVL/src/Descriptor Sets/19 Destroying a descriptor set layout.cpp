#include "19 Destroying a descriptor set layout.h"

namespace VulkanLibrary {

  void DestroyDescriptorSetLayout( VkDevice                logical_device,
                                   VkDescriptorSetLayout & descriptor_set_layout ) {
    if( VK_NULL_HANDLE != descriptor_set_layout ) {
      vkDestroyDescriptorSetLayout( logical_device, descriptor_set_layout, nullptr );
      descriptor_set_layout = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
