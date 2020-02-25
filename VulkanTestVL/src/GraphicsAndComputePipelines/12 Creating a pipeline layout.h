

#ifndef CREATING_A_PIPELINE_LAYOUT
#define CREATING_A_PIPELINE_LAYOUT

#include "common.h"

namespace VulkanLibrary {

  bool CreatePipelineLayout( VkDevice                                   logical_device,
                             std::vector<VkDescriptorSetLayout> const & descriptor_set_layouts,
                             std::vector<VkPushConstantRange> const   & push_constant_ranges,
                             VkPipelineLayout                         & pipeline_layout );

} // namespace VulkanLibrary

#endif // CREATING_A_PIPELINE_LAYOUT