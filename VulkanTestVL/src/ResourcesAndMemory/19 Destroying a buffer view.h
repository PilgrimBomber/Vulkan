
#ifndef DESTROYING_A_BUFFER_VIEW
#define DESTROYING_A_BUFFER_VIEW

#include "common.h"

namespace VulkanLibrary {

  void DestroyBufferView( VkDevice       logical_device,
                          VkBufferView & buffer_view );

} // namespace VulkanLibrary

#endif // DESTROYING_A_BUFFER_VIEW