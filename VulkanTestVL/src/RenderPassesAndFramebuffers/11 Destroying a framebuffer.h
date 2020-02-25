

#ifndef DESTROYING_A_FRAMEBUFFER
#define DESTROYING_A_FRAMEBUFFER

#include "common.h"

namespace VulkanLibrary {

  void DestroyFramebuffer( VkDevice        logical_device,
                           VkFramebuffer & framebuffer );

} // namespace VulkanLibrary

#endif // DESTROYING_A_FRAMEBUFFER