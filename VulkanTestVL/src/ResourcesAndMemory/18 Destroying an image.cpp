#include "18 Destroying an image.h"

namespace VulkanLibrary {

  void DestroyImage( VkDevice   logical_device,
                     VkImage  & image ) {
    if( VK_NULL_HANDLE != image ) {
      vkDestroyImage( logical_device, image, nullptr );
      image = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
