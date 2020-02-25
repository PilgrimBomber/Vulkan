#ifndef CREATING_AN_IMAGE_VIEW
#define CREATING_AN_IMAGE_VIEW

#include "common.h"

namespace VulkanLibrary {

  bool CreateImageView( VkDevice             logical_device,
                        VkImage              image,
                        VkImageViewType      view_type,
                        VkFormat             format,
                        VkImageAspectFlags   aspect,
                        VkImageView        & image_view );

} // namespace VulkanLibrary

#endif // CREATING_AN_IMAGE_VIEW