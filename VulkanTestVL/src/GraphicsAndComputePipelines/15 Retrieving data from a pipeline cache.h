

#ifndef RETRIEVING_DATA_FROM_A_PIPELINE_CACHE
#define RETRIEVING_DATA_FROM_A_PIPELINE_CACHE

#include "common.h"

namespace VulkanLibrary {

  bool RetrieveDataFromPipelineCache( VkDevice                     logical_device,
                                      VkPipelineCache              pipeline_cache,
                                      std::vector<unsigned char> & pipeline_cache_data );

} // namespace VulkanLibrary

#endif // RETRIEVING_DATA_FROM_A_PIPELINE_CACHE