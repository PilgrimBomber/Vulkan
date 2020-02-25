

#include "20 Destroying a sampler.h"

namespace VulkanLibrary {

  void DestroySampler( VkDevice    logical_device,
                       VkSampler & sampler ) {
    if( VK_NULL_HANDLE != sampler ) {
      vkDestroySampler( logical_device, sampler, nullptr );
      sampler = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
