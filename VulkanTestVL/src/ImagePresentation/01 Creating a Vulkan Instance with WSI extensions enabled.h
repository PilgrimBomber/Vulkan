
#ifndef CREATING_A_VULKAN_INSTANCE_WITH_WSI_EXTENSIONS_ENABLED
#define CREATING_A_VULKAN_INSTANCE_WITH_WSI_EXTENSIONS_ENABLED

#include "common.h"

namespace VulkanLibrary {

  bool CreateVulkanInstanceWithWsiExtensionsEnabled( std::vector<char const *> & desired_extensions,
                                                     char const * const          application_name,
                                                     VkInstance                & instance );

} // namespace VulkanLibrary

#endif // CREATING_A_VULKAN_INSTANCE_WITH_WSI_EXTENSIONS_ENABLED