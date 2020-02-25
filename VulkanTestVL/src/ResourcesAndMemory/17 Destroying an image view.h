

#ifndef DESTROYING_AN_IMAGE_VIEW
#define DESTROYING_AN_IMAGE_VIEW

#include "common.h"

namespace VulkanLibrary {

  void DestroyImageView( VkDevice      logical_device,
                         VkImageView & image_view );

} // namespace VulkanLibrary

#endif // DESTROYING_AN_IMAGE_VIEW