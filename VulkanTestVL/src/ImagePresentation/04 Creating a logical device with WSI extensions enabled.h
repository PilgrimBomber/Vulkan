

#ifndef CREATING_A_LOGICAL_DEVICE_WITH_WSI_EXTENSIONS_ENABLED
#define CREATING_A_LOGICAL_DEVICE_WITH_WSI_EXTENSIONS_ENABLED

#include "CreateLogicalDevices.h"

namespace VulkanLibrary {

  bool CreateLogicalDeviceWithWsiExtensionsEnabled( VkPhysicalDevice            physical_device,
                                                    std::vector< QueueInfo >    queue_infos,
                                                    std::vector<char const *> & desired_extensions,
                                                    VkPhysicalDeviceFeatures  * desired_features,
                                                    VkDevice                  & logical_device );

} // namespace VulkanLibrary

#endif // CREATING_A_LOGICAL_DEVICE_WITH_WSI_EXTENSIONS_ENABLED