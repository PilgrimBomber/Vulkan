

#include "17 Resetting a descriptor pool.h"

namespace VulkanLibrary {

  bool ResetDescriptorPool( VkDevice          logical_device,
                            VkDescriptorPool  descriptor_pool ) {
    VkResult result = vkResetDescriptorPool( logical_device, descriptor_pool, 0 );
    if( VK_SUCCESS != result ) {
      std::cout << "Error occurred during descriptor pool reset." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
