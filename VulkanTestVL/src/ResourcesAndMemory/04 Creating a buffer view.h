
#ifndef CREATING_A_BUFFER_VIEW
#define CREATING_A_BUFFER_VIEW

#include "common.h"

namespace VulkanLibrary {

  bool CreateBufferView( VkDevice       logical_device,
                         VkBuffer       buffer,
                         VkFormat       format,
                         VkDeviceSize   memory_offset,
                         VkDeviceSize   memory_range,
                         VkBufferView & buffer_view );

} // namespace VulkanLibrary

#endif // CREATING_A_BUFFER_VIEW