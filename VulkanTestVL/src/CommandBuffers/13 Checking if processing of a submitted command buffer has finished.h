#ifndef CHECKING_IF_PROCESSING_OF_A_SUBMITTED_COMMAND_BUFFER_HAS_FINISHED
#define CHECKING_IF_PROCESSING_OF_A_SUBMITTED_COMMAND_BUFFER_HAS_FINISHED

#include "common.h"

namespace VulkanLibrary {

  bool CheckIfProcessingOfSubmittedCommandBufferHasFinished( VkDevice                         logical_device,
                                                             VkQueue                          queue,
                                                             std::vector<WaitSemaphoreInfo>   wait_semaphore_infos,
                                                             std::vector<VkCommandBuffer>     command_buffers,
                                                             std::vector<VkSemaphore>         signal_semaphores,
                                                             VkFence                          fence,
                                                             uint64_t                         timeout,
                                                             VkResult                       & wait_status );

} // namespace VulkanLibrary

#endif // CHECKING_IF_PROCESSING_OF_A_SUBMITTED_COMMAND_BUFFER_HAS_FINISHED