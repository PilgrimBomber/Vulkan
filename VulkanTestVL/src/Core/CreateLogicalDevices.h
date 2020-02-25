
#ifndef CREATING_A_LOGICAL_DEVICE
#define CREATING_A_LOGICAL_DEVICE

#include "common.h"
#include "VulkanFunctions.h"

namespace VulkanLibrary {

  struct QueueInfo {
    uint32_t           FamilyIndex;
    std::vector<float> Priorities;
  };

  bool CreateLogicalDevice( VkPhysicalDevice                  physical_device,
                            std::vector< QueueInfo >          queue_infos,
                            std::vector<char const *> const & desired_extensions,
                            VkPhysicalDeviceFeatures        * desired_features,
                            VkDevice                        & logical_device );

} // namespace VulkanLibrary

#endif // CREATING_A_LOGICAL_DEVICE