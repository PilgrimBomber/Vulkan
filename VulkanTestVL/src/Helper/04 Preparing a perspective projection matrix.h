
#ifndef PREPARING_A_PERSPECTIVE_PROJECTION_MATRIX
#define PREPARING_A_PERSPECTIVE_PROJECTION_MATRIX

#include "Tools.h"

namespace VulkanLibrary {

  Matrix4x4 PreparePerspectiveProjectionMatrix( float aspect_ratio,
                                                float field_of_view,
                                                float near_plane,
                                                float far_plane );

} // namespace VulkanLibrary

#endif // PREPARING_A_PERSPECTIVE_PROJECTION_MATRIX