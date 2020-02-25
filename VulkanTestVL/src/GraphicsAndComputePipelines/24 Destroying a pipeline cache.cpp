

#include "24 Destroying a pipeline cache.h"

namespace VulkanLibrary {

  void DestroyPipelineCache( VkDevice          logical_device,
                             VkPipelineCache & pipeline_cache ) {
    if( VK_NULL_HANDLE != pipeline_cache ) {
      vkDestroyPipelineCache( logical_device, pipeline_cache, nullptr );
      pipeline_cache = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
