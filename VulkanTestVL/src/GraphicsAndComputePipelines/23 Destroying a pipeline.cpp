
#include "23 Destroying a pipeline.h"

namespace VulkanLibrary {

  void DestroyPipeline( VkDevice     logical_device,
                        VkPipeline & pipeline ) {
    if( VK_NULL_HANDLE != pipeline ) {
      vkDestroyPipeline( logical_device, pipeline, nullptr );
      pipeline = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
