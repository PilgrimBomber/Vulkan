#include "12 Copying data between buffers.h"

namespace VulkanLibrary {

  void CopyDataBetweenBuffers( VkCommandBuffer           command_buffer,
                               VkBuffer                  source_buffer,
                               VkBuffer                  destination_buffer,
                               std::vector<VkBufferCopy> regions ) {
    if( regions.size() > 0 ) {
      vkCmdCopyBuffer( command_buffer, source_buffer, destination_buffer, static_cast<uint32_t>(regions.size()), regions.data() );
    }
  }

} // namespace VulkanLibrary
