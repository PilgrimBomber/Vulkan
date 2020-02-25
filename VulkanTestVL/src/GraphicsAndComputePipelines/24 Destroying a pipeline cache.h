

#ifndef DESTROYING_A_PIPELINE_CACHE
#define DESTROYING_A_PIPELINE_CACHE

#include "common.h"

namespace VulkanLibrary {

  void DestroyPipelineCache( VkDevice          logical_device,
                             VkPipelineCache & pipeline_cache );

} // namespace VulkanLibrary

#endif // DESTROYING_A_PIPELINE_CACHE