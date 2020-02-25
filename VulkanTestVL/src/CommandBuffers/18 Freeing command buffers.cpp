

#include "18 Freeing command buffers.h"

namespace VulkanLibrary {

  void FreeCommandBuffers( VkDevice                       logical_device,
                           VkCommandPool                  command_pool,
                           std::vector<VkCommandBuffer> & command_buffers ) {
    if( command_buffers.size() > 0 ) {
      vkFreeCommandBuffers( logical_device, command_pool, static_cast<uint32_t>(command_buffers.size()), command_buffers.data() );
      command_buffers.clear();
    }
  }

} // namespace VulkanLibrary
