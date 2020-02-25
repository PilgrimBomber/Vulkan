#ifndef GETTING_A_DEVICE_QUEUE
#define GETTING_A_DEVICE_QUEUE

#include "common.h"
#include "VulkanFunctions.h"

namespace VulkanLibrary {

  void GetDeviceQueue( VkDevice logical_device, uint32_t queue_family_index, uint32_t queue_index, VkQueue & queue );

} // namespace VulkanLibrary

#endif // GETTING_A_DEVICE_QUEUE