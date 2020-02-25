
#include "01 Preparing a translation matrix.h"

namespace VulkanLibrary {

  Matrix4x4 PrepareTranslationMatrix( float x,
                                      float y,
                                      float z ) {
    Matrix4x4 translation_matrix = {
      1.0f, 0.0f, 0.0f, 0.0f,
      0.0f, 1.0f, 0.0f, 0.0f,
      0.0f, 0.0f, 1.0f, 0.0f,
         x,    y,    z, 1.0f
    };
    return translation_matrix;
  }

} // namespace VulkanLibrary
