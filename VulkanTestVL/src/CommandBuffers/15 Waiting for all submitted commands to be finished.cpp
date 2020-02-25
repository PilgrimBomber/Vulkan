

#include "15 Waiting for all submitted commands to be finished.h"

namespace VulkanLibrary {

  bool WaitForAllSubmittedCommandsToBeFinished( VkDevice logical_device ) {
    VkResult result = vkDeviceWaitIdle( logical_device );
    if( VK_SUCCESS != result ) {
      std::cout << "Waiting on a device failed." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
