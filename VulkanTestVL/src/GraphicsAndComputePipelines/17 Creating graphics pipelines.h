

#ifndef CREATING_GRAPHICS_PIPELINES
#define CREATING_GRAPHICS_PIPELINES

#include "common.h"

namespace VulkanLibrary {

  bool CreateGraphicsPipelines( VkDevice                                             logical_device,
                                std::vector<VkGraphicsPipelineCreateInfo> const    & graphics_pipeline_create_infos,
                                VkPipelineCache                                      pipeline_cache,
                                std::vector<VkPipeline>                            & graphics_pipelines );

} // namespace VulkanLibrary

#endif // CREATING_A_GRAPHICS_PIPELINE