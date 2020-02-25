
#ifndef BINDING_VERTEX_BUFFERS
#define BINDING_VERTEX_BUFFERS

#include "common.h"

namespace VulkanLibrary {

  struct VertexBufferParameters {
    VkBuffer      Buffer;
    VkDeviceSize  MemoryOffset;
  };

  void BindVertexBuffers( VkCommandBuffer                             command_buffer,
                          uint32_t                                    first_binding,
                          std::vector<VertexBufferParameters> const & buffers_parameters );

} // namespace VulkanLibrary

#endif // BINDING_VERTEX_BUFFERS