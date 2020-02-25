#include "GetDeviceQueue.h"



namespace VulkanLibrary {

  void GetDeviceQueue( VkDevice logical_device, uint32_t queue_family_index, uint32_t queue_index, VkQueue & queue ) {
    vkGetDeviceQueue( logical_device, queue_family_index, queue_index, &queue );
  }

} // namespace VulkanLibrary
