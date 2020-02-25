#ifndef TOOLS
#define TOOLS

#include "common.h"

namespace VulkanLibrary {

  using Vector3   = std::array<float, 3>;
  using Matrix4x4 = std::array<float, 16>;

  bool GetBinaryFileContents( std::string const          & filename,
                              std::vector<unsigned char> & contents );

  float Deg2Rad( float value );

  float Dot( Vector3 const & left,
             Vector3 const & right );

  Vector3 Cross( Vector3 const & left,
                 Vector3 const & right );

  Vector3 Normalize( Vector3 const & vector );

  Vector3 operator+ ( Vector3 const & left,
                      Vector3 const & right );

  Vector3 operator- ( Vector3 const & left,
                      Vector3 const & right );

  Vector3 operator+ ( float const   & left,
                      Vector3 const & right );

  Vector3 operator- ( float const   & left,
                      Vector3 const & right );

  Vector3 operator+ ( Vector3 const & left,
                      float const   & right );

  Vector3 operator- ( Vector3 const & left,
                      float const   & right );

  Vector3 operator* ( float           left,
                      Vector3 const & right );

  Vector3 operator* ( Vector3 const & left,
                      float           right );

  Vector3 operator* ( Vector3 const   & left,
                      Matrix4x4 const & right );

  Vector3 operator- ( Vector3 const & vector );

  bool operator== ( Vector3 const & left,
                    Vector3 const & right );

  Matrix4x4 operator* ( Matrix4x4 const & left,
                        Matrix4x4 const & right );

} // namespace VulkanLibrary

#endif // TOOLS