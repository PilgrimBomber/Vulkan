

#ifndef SPECIFYING_PIPELINE_SHADER_STAGES
#define SPECIFYING_PIPELINE_SHADER_STAGES

#include "common.h"

namespace VulkanLibrary {

  struct ShaderStageParameters {
    VkShaderStageFlagBits        ShaderStage;
    VkShaderModule               ShaderModule;
    char const                 * EntryPointName;
    VkSpecializationInfo const * SpecializationInfo;
  };

  void SpecifyPipelineShaderStages( std::vector<ShaderStageParameters> const     & shader_stage_params,
                                    std::vector<VkPipelineShaderStageCreateInfo> & shader_stage_create_infos );

} // namespace VulkanLibrary

#endif // SPECIFYING_PIPELINE_SHADER_STAGES