

#include "14 Creating a pipeline cache object.h"

namespace VulkanLibrary {

  bool CreatePipelineCacheObject( VkDevice                           logical_device,
                                  std::vector<unsigned char> const & cache_data,
                                  VkPipelineCache                  & pipeline_cache ) {
    VkPipelineCacheCreateInfo pipeline_cache_create_info = {
      VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO,     // VkStructureType                sType
      nullptr,                                          // const void                   * pNext
      0,                                                // VkPipelineCacheCreateFlags     flags
      static_cast<uint32_t>(cache_data.size()),         // size_t                         initialDataSize
      cache_data.data()                                 // const void                   * pInitialData
    };

    VkResult result = vkCreatePipelineCache( logical_device, &pipeline_cache_create_info, nullptr, &pipeline_cache );
    if( VK_SUCCESS != result ) {
      std::cout << "Could not create pipeline cache." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
