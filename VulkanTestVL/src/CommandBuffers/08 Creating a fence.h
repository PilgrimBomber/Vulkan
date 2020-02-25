#ifndef CREATING_A_FENCE
#define CREATING_A_FENCE

#include "common.h"

namespace VulkanLibrary {

  bool CreateFence( VkDevice   logical_device,
                    bool       signaled,
                    VkFence  & fence );

} // namespace VulkanLibrary

#endif // CREATING_A_FENCE