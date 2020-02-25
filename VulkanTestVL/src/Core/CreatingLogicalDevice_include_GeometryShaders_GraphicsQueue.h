#ifndef CREATING_A_LOGICAL_DEVICE_WITH_GEOMETRY_SHADERS_AND_GRAPHICS_AND_COMPUTE_QUEUES
#define CREATING_A_LOGICAL_DEVICE_WITH_GEOMETRY_SHADERS_AND_GRAPHICS_AND_COMPUTE_QUEUES

#include "common.h"
#include "VulkanFunctions.h"

namespace VulkanLibrary {

  bool CreateLogicalDeviceWithGeometryShadersAndGraphicsAndComputeQueues( VkInstance   instance,
                                                                          VkDevice   & logical_device,
                                                                          VkQueue    & graphics_queue,
                                                                          VkQueue    & compute_queue );

} // namespace VulkanLibrary

#endif // CREATING_A_LOGICAL_DEVICE_WITH_GEOMETRY_SHADERS_AND_GRAPHICS_AND_COMPUTE_QUEUES