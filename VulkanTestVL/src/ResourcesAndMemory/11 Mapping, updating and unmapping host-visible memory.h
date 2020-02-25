#ifndef MAPPING_UPDATING_AND_UNMAPPING_HOST_VISIBLE_MEMORY
#define MAPPING_UPDATING_AND_UNMAPPING_HOST_VISIBLE_MEMORY

#include "common.h"

namespace VulkanLibrary {

  bool MapUpdateAndUnmapHostVisibleMemory( VkDevice             logical_device,
                                           VkDeviceMemory       memory_object,
                                           VkDeviceSize         offset,
                                           VkDeviceSize         data_size,
                                           void               * data,
                                           bool                 unmap,
                                           void             * * pointer );

} // namespace VulkanLibrary

#endif // MAPPING_UPDATING_AND_UNMAPPING_HOST_VISIBLE_MEMORY