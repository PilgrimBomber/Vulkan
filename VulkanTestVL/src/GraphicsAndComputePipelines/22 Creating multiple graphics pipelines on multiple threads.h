

#ifndef CREATING_MULTIPLE_GRAPHICS_PIPELINES_ON_MULTIPLE_THREADS
#define CREATING_MULTIPLE_GRAPHICS_PIPELINES_ON_MULTIPLE_THREADS

#include "common.h"

namespace VulkanLibrary {

  bool CreateMultipleGraphicsPipelinesOnMultipleThreads( VkDevice                                                       logical_device,
                                                         std::string const                                            & pipeline_cache_filename,
                                                         std::vector<std::vector<VkGraphicsPipelineCreateInfo>> const & graphics_pipelines_create_infos,
                                                         std::vector<std::vector<VkPipeline>>                         & graphics_pipelines );

} // namespace VulkanLibrary

#endif // CREATING_MULTIPLE_GRAPHICS_PIPELINES_ON_MULTIPLE_THREADS