#include "02 Allocating command buffers.h"

namespace VulkanLibrary {

  bool AllocateCommandBuffers( VkDevice                       logical_device,
                               VkCommandPool                  command_pool,
                               VkCommandBufferLevel           level,
                               uint32_t                       count,
                               std::vector<VkCommandBuffer> & command_buffers ) {
    VkCommandBufferAllocateInfo command_buffer_allocate_info = {
      VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,   // VkStructureType          sType
      nullptr,                                          // const void             * pNext
      command_pool,                                     // VkCommandPool            commandPool
      level,                                            // VkCommandBufferLevel     level
      count                                             // uint32_t                 commandBufferCount
    };

    command_buffers.resize( count );

    VkResult result = vkAllocateCommandBuffers( logical_device, &command_buffer_allocate_info, command_buffers.data() );
    if( VK_SUCCESS != result ) {
      std::cout << "Could not allocate command buffers." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
