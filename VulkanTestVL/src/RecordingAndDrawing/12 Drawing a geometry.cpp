
#include "12 Drawing a geometry.h"

namespace VulkanLibrary {

  void DrawGeometry( VkCommandBuffer command_buffer,
                     uint32_t        vertex_count,
                     uint32_t        instance_count,
                     uint32_t        first_vertex,
                     uint32_t        first_instance ) {
    vkCmdDraw( command_buffer, vertex_count, instance_count, first_vertex, first_instance );
  }

} // namespace VulkanLibrary
