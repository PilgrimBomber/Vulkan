
#include "05 Preparing an orthographic projection matrix.h"

namespace VulkanLibrary {

  Matrix4x4 PrepareOrthographicProjectionMatrix( float left_plane,
                                                 float right_plane,
                                                 float bottom_plane,
                                                 float top_plane,
                                                 float near_plane,
                                                 float far_plane ) {
    Matrix4x4 orthographic_projection_matrix = {
      2.0f / (right_plane - left_plane),
      0.0f,
      0.0f,
      0.0f,

      0.0f,
      2.0f / (bottom_plane - top_plane),
      0.0f,
      0.0f,

      0.0f,
      0.0f,
      1.0f / (near_plane - far_plane),
      0.0f,

      -(right_plane + left_plane) / (right_plane - left_plane),
      -(bottom_plane + top_plane) / (bottom_plane - top_plane),
      near_plane / (near_plane - far_plane),
      1.0f
    };
    return orthographic_projection_matrix;
  }

} // namespace VulkanLibrary
