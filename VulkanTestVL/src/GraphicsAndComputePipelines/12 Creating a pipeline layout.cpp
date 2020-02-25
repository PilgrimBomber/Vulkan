
#include "12 Creating a pipeline layout.h"

namespace VulkanLibrary {

  bool CreatePipelineLayout( VkDevice                                   logical_device,
                             std::vector<VkDescriptorSetLayout> const & descriptor_set_layouts,
                             std::vector<VkPushConstantRange> const   & push_constant_ranges,
                             VkPipelineLayout                         & pipeline_layout ) {
    VkPipelineLayoutCreateInfo pipeline_layout_create_info = {
      VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO,          // VkStructureType                  sType
      nullptr,                                                // const void                     * pNext
      0,                                                      // VkPipelineLayoutCreateFlags      flags
      static_cast<uint32_t>(descriptor_set_layouts.size()),   // uint32_t                         setLayoutCount
      descriptor_set_layouts.data(),                          // const VkDescriptorSetLayout    * pSetLayouts
      static_cast<uint32_t>(push_constant_ranges.size()),     // uint32_t                         pushConstantRangeCount
      push_constant_ranges.data()                             // const VkPushConstantRange      * pPushConstantRanges
    };

    VkResult result = vkCreatePipelineLayout( logical_device, &pipeline_layout_create_info, nullptr, &pipeline_layout );

    if( VK_SUCCESS != result ) {
      std::cout << "Could not create pipeline layout." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
