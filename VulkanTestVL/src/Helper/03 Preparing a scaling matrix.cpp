
#include "03 Preparing a scaling matrix.h"

namespace VulkanLibrary {

  Matrix4x4 PrepareScalingMatrix( float x,
                                  float y,
                                  float z ) {
    Matrix4x4 scaling_matrix = {
         x, 0.0f, 0.0f, 0.0f,
      0.0f,    y, 0.0f, 0.0f,
      0.0f, 0.0f,    z, 0.0f,
      0.0f, 0.0f, 0.0f, 1.0f
    };
    return scaling_matrix;
  }

} // namespace VulkanLibrary
