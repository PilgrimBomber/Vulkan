#include "17 Destroying an image view.h"

namespace VulkanLibrary {

  void DestroyImageView( VkDevice      logical_device,
                         VkImageView & image_view ) {
    if( VK_NULL_HANDLE != image_view ) {
      vkDestroyImageView( logical_device, image_view, nullptr );
      image_view = VK_NULL_HANDLE;
    }
  }

} // namespace VulkanLibrary
