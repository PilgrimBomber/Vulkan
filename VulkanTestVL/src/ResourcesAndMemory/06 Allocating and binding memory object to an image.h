
#ifndef ALLOCATING_AND_BINDING_MEMORY_OBJECT_TO_AN_IMAGE
#define ALLOCATING_AND_BINDING_MEMORY_OBJECT_TO_AN_IMAGE

#include "common.h"

namespace VulkanLibrary {

  bool AllocateAndBindMemoryObjectToImage( VkPhysicalDevice           physical_device,
                                           VkDevice                   logical_device,
                                           VkImage                    image,
                                           VkMemoryPropertyFlagBits   memory_properties,
                                           VkDeviceMemory           & memory_object );

} // namespace VulkanLibrary

#endif // ALLOCATING_AND_BINDING_MEMORY_OBJECT_TO_AN_IMAGE