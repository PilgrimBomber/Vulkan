

#ifndef DESTROYING_A_SHADER_MODULE
#define DESTROYING_A_SHADER_MODULE

#include "common.h"

namespace VulkanLibrary {

  void DestroyShaderModule( VkDevice         logical_device,
                            VkShaderModule & shader_module );

} // namespace VulkanLibrary

#endif // CREATING_A_COMPUTE_PIPELINE