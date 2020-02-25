
#ifndef BEGINNING_A_COMMAND_BUFFER_RECORDING_OPERATION
#define BEGINNING_A_COMMAND_BUFFER_RECORDING_OPERATION

#include "common.h"

namespace VulkanLibrary {

  bool BeginCommandBufferRecordingOperation( VkCommandBuffer                  command_buffer,
                                             VkCommandBufferUsageFlags        usage,
                                             VkCommandBufferInheritanceInfo * secondary_command_buffer_info );

} // namespace VulkanLibrary

#endif // BEGINNING_A_COMMAND_BUFFER_RECORDING_OPERATION