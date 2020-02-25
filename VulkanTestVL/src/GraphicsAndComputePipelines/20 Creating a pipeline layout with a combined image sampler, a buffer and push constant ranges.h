
#ifndef CREATING_A_PIPELINE_LAYOUT_WITH_A_COMBINED_IMAGE_SAMPLER_A_BUFFER_AND_PUSH_CONSTANT_RANGES
#define CREATING_A_PIPELINE_LAYOUT_WITH_A_COMBINED_IMAGE_SAMPLER_A_BUFFER_AND_PUSH_CONSTANT_RANGES

#include "common.h"

namespace VulkanLibrary {

  bool CreatePipelineLayoutWithCombinedImageSamplerBufferAndPushConstantRanges( VkDevice                                 logical_device,
                                                                                std::vector<VkPushConstantRange> const & push_constant_ranges,
                                                                                VkDescriptorSetLayout                  & descriptor_set_layout,
                                                                                VkPipelineLayout                       & pipeline_layout );

} // namespace VulkanLibrary

#endif // CREATING_A_PIPELINE_LAYOUT_WITH_A_COMBINED_IMAGE_SAMPLER_A_BUFFER_AND_PUSH_CONSTANT_RANGES