
#ifndef ALLOCATING_AND_BINDING_MEMORY_OBJECT_TO_A_BUFFER
#define ALLOCATING_AND_BINDING_MEMORY_OBJECT_TO_A_BUFFER

#include "common.h"

namespace VulkanLibrary {

  bool AllocateAndBindMemoryObjectToBuffer( VkPhysicalDevice           physical_device,
                                            VkDevice                   logical_device,
                                            VkBuffer                   buffer,
                                            VkMemoryPropertyFlagBits   memory_properties,
                                            VkDeviceMemory           & memory_object );

} // namespace VulkanLibrary

#endif // ALLOCATING_AND_BINDING_MEMORY_OBJECT_TO_A_BUFFER