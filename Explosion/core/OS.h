#ifndef OS
#define OS

#ifdef _WIN32
#include <Windows.h>
#endif

#include "common.h"

namespace VulkanLibrary {

  class ShaderExampleBase;

  // Window managemenet class

  class WindowFramework {
  public:
             WindowFramework( const char               * window_title,
                              int                        x,
                              int                        y,
                              int                        width,
                              int                        height,
                              ShaderExampleBase & sample );
    virtual ~WindowFramework();

    virtual void Render() final;

  private:
    WindowParameters           WindowParameters;
    ShaderExampleBase & Sample;
    bool                       Created;
  };

} // namespace VulkanLibrary

#endif // OS