
#ifndef PREPARING_AN_ORTHOGRAPHIC_PROJECTION_MATRIX
#define PREPARING_AN_ORTHOGRAPHIC_PROJECTION_MATRIX

#include "Tools.h"

namespace VulkanLibrary {

  Matrix4x4 PrepareOrthographicProjectionMatrix( float left_plane,
                                                 float right_plane,
                                                 float bottom_plane,
                                                 float top_plane,
                                                 float near_plane,
                                                 float far_plane );

} // namespace VulkanLibrary

#endif // PREPARING_AN_ORTHOGRAPHIC_PROJECTION_MATRIX