
#include "17 Recording command buffers on multiple threads.h"

namespace VulkanLibrary {

  bool RecordCommandBuffersOnMultipleThreads( std::vector<CommandBufferRecordingThreadParameters> const & threads_parameters,
                                              VkQueue                                                     queue,
                                              std::vector<WaitSemaphoreInfo>                              wait_semaphore_infos,
                                              std::vector<VkSemaphore>                                    signal_semaphores,
                                              VkFence                                                     fence ) {

    std::vector<std::thread> threads( threads_parameters.size() );
    for( size_t i = 0; i < threads_parameters.size(); ++i ) {
      threads[i] = std::thread::thread( threads_parameters[i].RecordingFunction, threads_parameters[i].CommandBuffer );
    }

    std::vector<VkCommandBuffer> command_buffers( threads_parameters.size() );
    for( size_t i = 0; i < threads_parameters.size(); ++i ) {
      threads[i].join();
      command_buffers[i] = threads_parameters[i].CommandBuffer;
    }

    if( !SubmitCommandBuffersToQueue( queue, wait_semaphore_infos, command_buffers, signal_semaphores, fence ) ) {
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
