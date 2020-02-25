
#ifndef DESTROYING_A_FENCE
#define DESTROYING_A_FENCE

#include "common.h"

namespace VulkanLibrary {

  void DestroyFence( VkDevice   logical_device,
                     VkFence  & fence );

} // namespace VulkanLibrary

#endif // DESTROYING_A_FENCE