#ifndef CREATING_A_SEMAPHORE
#define CREATING_A_SEMAPHORE

#include "common.h"

namespace VulkanLibrary {

  bool CreateSemaphore( VkDevice      logical_device,
                        VkSemaphore & semaphore );

} // namespace VulkanLibrary

#endif // CREATING_A_SEMAPHORE