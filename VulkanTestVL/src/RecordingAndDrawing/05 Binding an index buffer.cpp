
#include "05 Binding an index buffer.h"

namespace VulkanLibrary {

  void BindIndexBuffer( VkCommandBuffer   command_buffer,
                        VkBuffer          buffer,
                        VkDeviceSize      memory_offset,
                        VkIndexType       index_type ) {
    vkCmdBindIndexBuffer( command_buffer, buffer, memory_offset, index_type );
  }

} // namespace VulkanLibrary
