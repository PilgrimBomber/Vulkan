#ifndef FREEING_A_MEMORY_OBJECT
#define FREEING_A_MEMORY_OBJECT

#include "common.h"

namespace VulkanLibrary {

  void FreeMemoryObject( VkDevice         logical_device,
                         VkDeviceMemory & memory_object );

} // namespace VulkanLibrary

#endif // FREEING_A_MEMORY_OBJECT