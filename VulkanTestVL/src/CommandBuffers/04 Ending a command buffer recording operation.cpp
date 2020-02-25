
#include "04 Ending a command buffer recording operation.h"

namespace VulkanLibrary {

  bool EndCommandBufferRecordingOperation( VkCommandBuffer command_buffer ) {
    VkResult result = vkEndCommandBuffer( command_buffer );
    if( VK_SUCCESS != result ) {
      std::cout << "Error occurred during command buffer recording." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
