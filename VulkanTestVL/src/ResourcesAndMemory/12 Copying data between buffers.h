
#ifndef COPYING_DATA_BETWEEN_BUFFERS
#define COPYING_DATA_BETWEEN_BUFFERS

#include "common.h"

namespace VulkanLibrary {

  void CopyDataBetweenBuffers( VkCommandBuffer           command_buffer,
                               VkBuffer                  source_buffer,
                               VkBuffer                  destination_buffer,
                               std::vector<VkBufferCopy> regions );

} // namespace VulkanLibrary

#endif // COPYING_DATA_BETWEEN_BUFFERS