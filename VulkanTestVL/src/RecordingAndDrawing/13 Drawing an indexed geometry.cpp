#include "13 Drawing an indexed geometry.h"

namespace VulkanLibrary {

  void DrawIndexedGeometry( VkCommandBuffer command_buffer,
                            uint32_t        index_count,
                            uint32_t        instance_count,
                            uint32_t        first_index,
                            uint32_t        vertex_offset,
                            uint32_t        first_instance ) {
    vkCmdDrawIndexed( command_buffer, index_count, instance_count, first_index, vertex_offset, first_instance );
  }

} // namespace VulkanLibrary
