

#include "14 Waiting until all commands submitted to a queue are finished.h"

namespace VulkanLibrary {

  bool WaitUntilAllCommandsSubmittedToQueueAreFinished( VkQueue queue ) {
    VkResult result = vkQueueWaitIdle( queue );
    if( VK_SUCCESS != result ) {
      std::cout << "Waiting for all operations submitted to queue failed." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
