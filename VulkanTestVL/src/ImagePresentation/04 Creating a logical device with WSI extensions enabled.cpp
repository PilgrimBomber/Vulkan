

#include "CreateLogicalDevices.h"
#include "04 Creating a logical device with WSI extensions enabled.h"

namespace VulkanLibrary {

  bool CreateLogicalDeviceWithWsiExtensionsEnabled( VkPhysicalDevice            physical_device,
                                                    std::vector< QueueInfo >    queue_infos,
                                                    std::vector<char const *> & desired_extensions,
                                                    VkPhysicalDeviceFeatures  * desired_features,
                                                    VkDevice                  & logical_device ) {
    desired_extensions.emplace_back( VK_KHR_SWAPCHAIN_EXTENSION_NAME );

    return CreateLogicalDevice( physical_device, queue_infos, desired_extensions, desired_features, logical_device );
  }

} // namespace VulkanLibrary
