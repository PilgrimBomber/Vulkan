
#ifndef GETTING_FEATURES_AND_PROPERTIES_OF_A_PHYSICAL_DEVICE
#define GETTING_FEATURES_AND_PROPERTIES_OF_A_PHYSICAL_DEVICE

#include "common.h"
#include "VulkanFunctions.h"

namespace VulkanLibrary {

  void GetFeaturesAndPropertiesOfPhysicalDevice( VkPhysicalDevice             physical_device,
                                                 VkPhysicalDeviceFeatures   & device_features,
                                                 VkPhysicalDeviceProperties & device_properties );



  bool CheckAvailableQueueFamiliesAndTheirProperties( VkPhysicalDevice                       physical_device,
                                                      std::vector<VkQueueFamilyProperties> & queue_families );
													  
													  
													  
  bool SelectIndexOfQueueFamilyWithDesiredCapabilities( VkPhysicalDevice   physical_device,
                                                        VkQueueFlags       desired_capabilities,
                                                        uint32_t         & queue_family_index );

} // namespace VulkanLibrary

#endif // GETTING_FEATURES_AND_PROPERTIES_OF_A_PHYSICAL_DEVICE