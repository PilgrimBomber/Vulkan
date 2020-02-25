#ifndef DRAWING_A_GEOMETRY
#define DRAWING_A_GEOMETRY

#include "common.h"

namespace VulkanLibrary {

  void DrawGeometry( VkCommandBuffer command_buffer,
                     uint32_t        vertex_count,
                     uint32_t        instance_count,
                     uint32_t        first_vertex,
                     uint32_t        first_instance );

} // namespace VulkanLibrary

#endif // DRAWING_A_GEOMETRY