
#ifndef DESTROYING_A_SEMAPHORE
#define DESTROYING_A_SEMAPHORE

#include "common.h"

namespace VulkanLibrary {

  void DestroySemaphore( VkDevice      logical_device,
                         VkSemaphore & semaphore );

} // namespace VulkanLibrary

#endif // DESTROYING_A_SEMAPHORE