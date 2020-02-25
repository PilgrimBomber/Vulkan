

#include "VulkanInstance.h"
#include "01 Creating a Vulkan Instance with WSI extensions enabled.h"

namespace VulkanLibrary {

  bool CreateVulkanInstanceWithWsiExtensionsEnabled( std::vector<char const *> & desired_extensions,
                                                     char const * const          application_name,
                                                     VkInstance                & instance ) {
    desired_extensions.emplace_back( VK_KHR_SURFACE_EXTENSION_NAME );
    desired_extensions.emplace_back(
#ifdef VK_USE_PLATFORM_WIN32_KHR
      VK_KHR_WIN32_SURFACE_EXTENSION_NAME

#elif defined VK_USE_PLATFORM_XCB_KHR
      VK_KHR_XCB_SURFACE_EXTENSION_NAME

#elif defined VK_USE_PLATFORM_XLIB_KHR
      VK_KHR_XLIB_SURFACE_EXTENSION_NAME
#endif
    );

    return CreateVulkanInstance( desired_extensions, application_name, instance );
  }

} // namespace VulkanLibrary
