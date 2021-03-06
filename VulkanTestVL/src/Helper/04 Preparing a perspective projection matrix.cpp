
#include "04 Preparing a perspective projection matrix.h"

namespace VulkanLibrary {

  Matrix4x4 PreparePerspectiveProjectionMatrix( float aspect_ratio,
                                                float field_of_view,
                                                float near_plane,
                                                float far_plane ) {
    float f = 1.0f / tan( Deg2Rad( 0.5f * field_of_view ) );

    Matrix4x4 perspective_projection_matrix = {
      f / aspect_ratio,
      0.0f,
      0.0f,
      0.0f,

      0.0f,
      -f,
      0.0f,
      0.0f,

      0.0f,
      0.0f,
      far_plane / (near_plane - far_plane),
      -1.0f,
      
      0.0f,
      0.0f,
      (near_plane * far_plane) / (near_plane - far_plane),
      0.0f
    };
    return perspective_projection_matrix;
  }

} // namespace VulkanLibrary
