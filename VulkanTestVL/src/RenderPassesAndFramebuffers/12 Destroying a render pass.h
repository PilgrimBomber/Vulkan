

#ifndef DESTROYING_A_RENDER_PASS
#define DESTROYING_A_RENDER_PASS

#include "common.h"

namespace VulkanLibrary {

  void DestroyRenderPass( VkDevice       logical_device,
                          VkRenderPass & render_pass );

} // namespace VulkanLibrary

#endif // DESTROYING_A_RENDER_PASS