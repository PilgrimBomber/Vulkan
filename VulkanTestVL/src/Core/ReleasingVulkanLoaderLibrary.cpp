#include "ReleasingVulkanLoaderLibrary.h"


namespace VulkanLibrary {

  void ReleaseVulkanLoaderLibrary( LIBRARY_TYPE & vulkan_library ) {
    if( nullptr != vulkan_library ) {
#if defined _WIN32
      FreeLibrary( vulkan_library );
#elif defined __linux
      dlclose( vulkan_library );
#endif
      vulkan_library = nullptr;
    }
  }

} // namespace VulkanLibrary
