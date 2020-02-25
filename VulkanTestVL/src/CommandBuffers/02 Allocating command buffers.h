#ifndef ALLOCATING_COMMAND_BUFFERS
#define ALLOCATING_COMMAND_BUFFERS

#include "common.h"

namespace VulkanLibrary {

  bool AllocateCommandBuffers( VkDevice                       logical_device,
                               VkCommandPool                  command_pool,
                               VkCommandBufferLevel           level,
                               uint32_t                       count,
                               std::vector<VkCommandBuffer> & command_buffers );

} // namespace VulkanLibrary

#endif // ALLOCATING_COMMAND_BUFFERS