#ifndef BINDING_AN_INDEX_BUFFER
#define BINDING_AN_INDEX_BUFFER

#include "common.h"

namespace VulkanLibrary {

  void BindIndexBuffer( VkCommandBuffer   command_buffer,
                        VkBuffer          buffer,
                        VkDeviceSize      memory_offset,
                        VkIndexType       index_type );

} // namespace VulkanLibrary

#endif // BINDING_AN_INDEX_BUFFER