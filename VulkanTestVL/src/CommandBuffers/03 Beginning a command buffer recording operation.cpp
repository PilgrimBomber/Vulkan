
#include "03 Beginning a command buffer recording operation.h"

namespace VulkanLibrary {

  bool BeginCommandBufferRecordingOperation( VkCommandBuffer                  command_buffer,
                                             VkCommandBufferUsageFlags        usage,
                                             VkCommandBufferInheritanceInfo * secondary_command_buffer_info ) {
    VkCommandBufferBeginInfo command_buffer_begin_info = {
      VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO,    // VkStructureType                        sType
      nullptr,                                        // const void                           * pNext
      usage,                                          // VkCommandBufferUsageFlags              flags
      secondary_command_buffer_info                   // const VkCommandBufferInheritanceInfo * pInheritanceInfo
    };

    VkResult result = vkBeginCommandBuffer( command_buffer, &command_buffer_begin_info );
    if( VK_SUCCESS != result ) {
      std::cout << "Could not begin command buffer recording operation." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
