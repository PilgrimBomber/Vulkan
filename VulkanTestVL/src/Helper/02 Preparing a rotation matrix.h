#ifndef PREPARING_A_ROTATION_MATRIX
#define PREPARING_A_ROTATION_MATRIX

#include "Tools.h"

namespace VulkanLibrary {

  Matrix4x4 PrepareRotationMatrix( float           angle,
                                   Vector3 const & axis,
                                   float           normalize_axis = false );

} // namespace VulkanLibrary

#endif // PREPARING_A_ROTATION_MATRIX