#ifndef SYNCHRONIZING_TWO_COMMAND_BUFFERS
#define SYNCHRONIZING_TWO_COMMAND_BUFFERS

#include "common.h"

namespace VulkanLibrary {

  bool SynchronizeTwoCommandBuffers( VkQueue                         first_queue,
                                     std::vector<WaitSemaphoreInfo>  first_wait_semaphore_infos,
                                     std::vector<VkCommandBuffer>    first_command_buffers,
                                     std::vector<WaitSemaphoreInfo>  synchronizing_semaphores,
                                     VkQueue                         second_queue,
                                     std::vector<VkCommandBuffer>    second_command_buffers,
                                     std::vector<VkSemaphore>        second_signal_semaphores,
                                     VkFence                         second_fence );

} // namespace VulkanLibrary

#endif // SYNCHRONIZING_TWO_COMMAND_BUFFERS