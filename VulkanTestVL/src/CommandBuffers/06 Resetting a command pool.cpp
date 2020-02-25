#include "06 Resetting a command pool.h"

namespace VulkanLibrary {

  bool ResetCommandPool( VkDevice      logical_device,
                         VkCommandPool command_pool,
                         bool          release_resources ) {
    VkResult result = vkResetCommandPool( logical_device, command_pool, release_resources ? VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT : 0 );
    if( VK_SUCCESS != result ) {
      std::cout << "Error occurred during command pool reset." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
