

#include "15 Retrieving data from a pipeline cache.h"

namespace VulkanLibrary {

  bool RetrieveDataFromPipelineCache( VkDevice                     logical_device,
                                      VkPipelineCache              pipeline_cache,
                                      std::vector<unsigned char> & pipeline_cache_data ) {
    size_t data_size = 0;
    VkResult result = VK_SUCCESS;

    result = vkGetPipelineCacheData( logical_device, pipeline_cache, &data_size, nullptr );
    if( (VK_SUCCESS != result) ||
        (0 == data_size) ) {
      std::cout << "Could not get the size of the pipeline cache." << std::endl;
      return false;
    }
    pipeline_cache_data.resize( data_size );

    result = vkGetPipelineCacheData( logical_device, pipeline_cache, &data_size, pipeline_cache_data.data() );
    if( (VK_SUCCESS != result) ||
        (0 == data_size) ) {
      std::cout << "Could not acquire pipeline cache data." << std::endl;
      return false;
    }

    return true;
  }

} // namespace VulkanLibrary
