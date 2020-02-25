#ifndef DRAWING_AN_INDEXED_GEOMETRY
#define DRAWING_AN_INDEXED_GEOMETRY

#include "common.h"

namespace VulkanLibrary {

  void DrawIndexedGeometry( VkCommandBuffer command_buffer,
                            uint32_t        index_count,
                            uint32_t        instance_count,
                            uint32_t        first_index,
                            uint32_t        vertex_offset,
                            uint32_t        first_instance );

} // namespace VulkanLibrary

#endif // DRAWING_AN_INDEXED_GEOMETRY