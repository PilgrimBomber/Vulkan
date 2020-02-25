
#ifndef CREATING_A_SHADER_MODULE
#define CREATING_A_SHADER_MODULE

#include "common.h"

namespace VulkanLibrary {

  bool CreateShaderModule( VkDevice                           logical_device,
                           std::vector<unsigned char> const & source_code,
                           VkShaderModule                   & shader_module );

} // namespace VulkanLibrary

#endif // CREATING_A_SHADER_MODULE