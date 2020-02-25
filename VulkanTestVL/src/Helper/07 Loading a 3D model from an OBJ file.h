
#ifndef LOADING_A_3D_MODEL_FROM_AN_OBJ_FILE
#define LOADING_A_3D_MODEL_FROM_AN_OBJ_FILE

#include "Tools.h"

namespace VulkanLibrary {

  struct Mesh {
    std::vector<float>  Data;

    struct Part {
      uint32_t  VertexOffset;
      uint32_t  VertexCount;
    };

    std::vector<Part>   Parts;
  };

  bool Load3DModelFromObjFile( char const * filename,
                               bool         load_normals,
                               bool         load_texcoords,
                               bool         generate_tangent_space_vectors,
                               bool         unify,
                               Mesh       & mesh,
                               uint32_t   * vertex_stride = nullptr );

} // namespace VulkanLibrary

#endif // LOADING_A_3D_MODEL_FROM_AN_OBJ_FILE