#ifndef FREEING_COMMAND_BUFFERS
#define FREEING_COMMAND_BUFFERS

#include "common.h"

namespace VulkanLibrary {

  void FreeCommandBuffers( VkDevice                       logical_device,
                           VkCommandPool                  command_pool,
                           std::vector<VkCommandBuffer> & command_buffers );

} // namespace VulkanLibrary

#endif // FREEING_COMMAND_BUFFERS