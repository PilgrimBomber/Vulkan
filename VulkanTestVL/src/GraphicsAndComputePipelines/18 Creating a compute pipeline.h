
#ifndef CREATING_A_COMPUTE_PIPELINE
#define CREATING_A_COMPUTE_PIPELINE

#include "common.h"

namespace VulkanLibrary {

  bool CreateComputePipeline( VkDevice                                logical_device,
                              VkPipelineCreateFlags                   additional_options,
                              VkPipelineShaderStageCreateInfo const & compute_shader_stage,
                              VkPipelineLayout                        pipeline_layout,
                              VkPipeline                              base_pipeline_handle,
                              VkPipelineCache                         pipeline_cache,
                              VkPipeline                            & compute_pipeline );

} // namespace VulkanLibrary

#endif // CREATING_A_COMPUTE_PIPELINE