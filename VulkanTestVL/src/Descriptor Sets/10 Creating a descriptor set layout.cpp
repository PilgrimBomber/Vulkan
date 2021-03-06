
#include "10 Creating a descriptor set layout.h"

namespace VulkanLibrary {

  bool CreateDescriptorSetLayout( VkDevice                                          logical_device,
                                  std::vector<VkDescriptorSetLayoutBinding> const & bindings,
                                  VkDescriptorSetLayout                           & descriptor_set_layout ) {
    VkDescriptorSetLayoutCreateInfo descriptor_set_layout_create_info = {
      VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO,  // VkStructureType                      sType
      nullptr,                                              // const void                         * pNext
      0,                                                    // VkDescriptorSetLayoutCreateFlags     flags
      static_cast<uint32_t>(bindings.size()),               // uint32_t                             bindingCount
      bindings.data()                                       // const VkDescriptorSetLayoutBinding * pBindings
    };

    VkResult result = vkCreateDescriptorSetLayout( logical_device, &descriptor_set_layout_create_info, nullptr, &descriptor_set_layout );
    if( VK_SUCCESS != result ) {
      std::cout << "Could not create a layout for descriptor sets." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
