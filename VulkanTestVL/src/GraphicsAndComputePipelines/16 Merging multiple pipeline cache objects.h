

#ifndef MERGING_MULTIPLE_PIPELINE_CACHE_OBJECTS
#define MERGING_MULTIPLE_PIPELINE_CACHE_OBJECTS

#include "common.h"

namespace VulkanLibrary {

  bool MergeMultiplePipelineCacheObjects( VkDevice                             logical_device,
                                          VkPipelineCache                      target_pipeline_cache,
                                          std::vector<VkPipelineCache> const & source_pipeline_caches );

} // namespace VulkanLibrary

#endif // MERGING_MULTIPLE_PIPELINE_CACHE_OBJECTS