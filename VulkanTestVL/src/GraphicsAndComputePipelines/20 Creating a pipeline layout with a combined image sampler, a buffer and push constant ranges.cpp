

#include "10 Creating a descriptor set layout.h"
#include "12 Creating a pipeline layout.h"
#include "20 Creating a pipeline layout with a combined image sampler, a buffer and push constant ranges.h"

namespace VulkanLibrary {

  bool CreatePipelineLayoutWithCombinedImageSamplerBufferAndPushConstantRanges( VkDevice                                 logical_device,
                                                                                std::vector<VkPushConstantRange> const & push_constant_ranges,
                                                                                VkDescriptorSetLayout                  & descriptor_set_layout,
                                                                                VkPipelineLayout                       & pipeline_layout ) {
    std::vector<VkDescriptorSetLayoutBinding> descriptor_set_layout_bindings = {
      {
        0,                                  // uint32_t               binding
        VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE,   // VkDescriptorType       descriptorType
        1,                                  // uint32_t               descriptorCount
        VK_SHADER_STAGE_FRAGMENT_BIT,       // VkShaderStageFlags     stageFlags
        nullptr                             // const VkSampler      * pImmutableSamplers
      },
      {
        1,                                  // uint32_t               binding
        VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER,  // VkDescriptorType       descriptorType
        1,                                  // uint32_t               descriptorCount
        VK_SHADER_STAGE_VERTEX_BIT,         // VkShaderStageFlags     stageFlags
        nullptr                             // const VkSampler      * pImmutableSamplers
      }
    };

    if( !CreateDescriptorSetLayout( logical_device, descriptor_set_layout_bindings, descriptor_set_layout ) ) {
      return false;
    }

    if( !CreatePipelineLayout( logical_device, { descriptor_set_layout }, push_constant_ranges, pipeline_layout ) ) {
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
