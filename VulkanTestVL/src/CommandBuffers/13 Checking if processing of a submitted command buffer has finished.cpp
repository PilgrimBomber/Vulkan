

#include "09 Waiting for fences.h"
#include "11 Submitting command buffers to the queue.h"
#include "13 Checking if processing of a submitted command buffer has finished.h"

namespace VulkanLibrary {

  bool CheckIfProcessingOfSubmittedCommandBufferHasFinished( VkDevice                         logical_device,
                                                             VkQueue                          queue,
                                                             std::vector<WaitSemaphoreInfo>   wait_semaphore_infos,
                                                             std::vector<VkCommandBuffer>     command_buffers,
                                                             std::vector<VkSemaphore>         signal_semaphores,
                                                             VkFence                          fence,
                                                             uint64_t                         timeout,
                                                             VkResult                       & wait_status ) {
    if( !SubmitCommandBuffersToQueue( queue, wait_semaphore_infos, command_buffers, signal_semaphores, fence ) ) {
      return false;
    }

    return WaitForFences( logical_device, { fence }, VK_FALSE, timeout );
  }

} // namespace VulkanLibrary
