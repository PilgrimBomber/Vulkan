
#include "26 Destroying a shader module.h"

namespace VulkanLibrary {

  void DestroyShaderModule( VkDevice         logical_device,
                            VkShaderModule & shader_module ) {
    if( VK_NULL_HANDLE != shader_module ) {
      vkDestroyShaderModule( logical_device, shader_module, nullptr );
      shader_module = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
