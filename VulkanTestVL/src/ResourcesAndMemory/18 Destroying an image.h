
#ifndef DESTROYING_AN_IMAGE
#define DESTROYING_AN_IMAGE

#include "common.h"

namespace VulkanLibrary {

  void DestroyImage( VkDevice   logical_device,
                     VkImage  & image );

} // namespace VulkanLibrary

#endif // DESTROYING_AN_IMAGE