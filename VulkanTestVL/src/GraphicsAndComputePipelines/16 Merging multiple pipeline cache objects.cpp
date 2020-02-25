

#include "16 Merging multiple pipeline cache objects.h"

namespace VulkanLibrary {

  bool MergeMultiplePipelineCacheObjects( VkDevice                             logical_device,
                                          VkPipelineCache                      target_pipeline_cache,
                                          std::vector<VkPipelineCache> const & source_pipeline_caches ) {
    if( source_pipeline_caches.size() > 0 ) {
      VkResult result = vkMergePipelineCaches( logical_device, target_pipeline_cache, static_cast<uint32_t>(source_pipeline_caches.size()), source_pipeline_caches.data() );
      if( VK_SUCCESS != result ) {
        std::cout << "Could not merge pipeline cache objects." << std::endl;
        return false;
      }
      return true;
    }
    return false;
  }

} // namespace VulkanLibrary
