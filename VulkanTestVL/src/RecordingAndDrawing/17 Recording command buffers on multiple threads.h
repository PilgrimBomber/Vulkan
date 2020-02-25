
#ifndef RECORDING_COMMAND_BUFFERS_ON_MULTIPLE_THREADS
#define RECORDING_COMMAND_BUFFERS_ON_MULTIPLE_THREADS

#include "11 Submitting command buffers to the queue.h"
#include "common.h"

namespace VulkanLibrary {

  struct CommandBufferRecordingThreadParameters {
    VkCommandBuffer                         CommandBuffer;
    std::function<bool( VkCommandBuffer )>  RecordingFunction;
  };

  bool RecordCommandBuffersOnMultipleThreads( std::vector<CommandBufferRecordingThreadParameters> const & threads_parameters,
                                              VkQueue                                                     queue,
                                              std::vector<WaitSemaphoreInfo>                              wait_semaphore_infos,
                                              std::vector<VkSemaphore>                                    signal_semaphores,
                                              VkFence                                                     fence );

} // namespace VulkanLibrary

#endif // RECORDING_COMMAND_BUFFERS_ON_MULTIPLE_THREADS