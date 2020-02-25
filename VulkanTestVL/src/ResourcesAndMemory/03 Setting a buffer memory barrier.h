
#ifndef SETTING_A_BUFFER_MEMORY_BARRIER
#define SETTING_A_BUFFER_MEMORY_BARRIER

#include "common.h"

namespace VulkanLibrary {

  struct BufferTransition {
    VkBuffer        Buffer;
    VkAccessFlags   CurrentAccess;
    VkAccessFlags   NewAccess;
    uint32_t        CurrentQueueFamily;
    uint32_t        NewQueueFamily;
  };

  void SetBufferMemoryBarrier( VkCommandBuffer               command_buffer,
                               VkPipelineStageFlags          generating_stages,
                               VkPipelineStageFlags          consuming_stages,
                               std::vector<BufferTransition> buffer_transitions );

} // namespace VulkanLibrary

#endif // SETTING_A_BUFFER_MEMORY_BARRIER