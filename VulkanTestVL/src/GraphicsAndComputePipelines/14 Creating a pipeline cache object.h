

#ifndef CREATING_A_PIPELINE_CACHE_OBJECT
#define CREATING_A_PIPELINE_CACHE_OBJECT

#include "common.h"

namespace VulkanLibrary {

  bool CreatePipelineCacheObject( VkDevice                           logical_device,
                                  std::vector<unsigned char> const & cache_data,
                                  VkPipelineCache                  & pipeline_cache );

} // namespace VulkanLibrary

#endif // CREATING_A_PIPELINE_CACHE_OBJECT