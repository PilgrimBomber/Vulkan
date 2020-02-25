#ifndef SUBMITTING_A_COMMAND_BUFFER_TO_THE_QUEUE
#define SUBMITTING_A_COMMAND_BUFFER_TO_THE_QUEUE

#include "common.h"

namespace VulkanLibrary {

  struct WaitSemaphoreInfo {
    VkSemaphore           Semaphore;
    VkPipelineStageFlags  WaitingStage;
  };

  bool SubmitCommandBuffersToQueue( VkQueue                         queue,
                                    std::vector<WaitSemaphoreInfo>  wait_semaphore_infos,
                                    std::vector<VkCommandBuffer>    command_buffers,
                                    std::vector<VkSemaphore>        signal_semaphores,
                                    VkFence                         fence );

} // namespace VulkanLibrary

#endif // SUBMITTING_A_COMMAND_BUFFER_TO_THE_QUEUE