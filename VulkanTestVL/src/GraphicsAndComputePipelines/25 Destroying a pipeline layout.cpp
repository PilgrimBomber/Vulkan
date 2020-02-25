
#include "25 Destroying a pipeline layout.h"

namespace VulkanLibrary {

  void DestroyPipelineLayout( VkDevice           logical_device,
                              VkPipelineLayout & pipeline_layout ) {
    if( VK_NULL_HANDLE != pipeline_layout ) {
      vkDestroyPipelineLayout( logical_device, pipeline_layout, nullptr );
      pipeline_layout = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
