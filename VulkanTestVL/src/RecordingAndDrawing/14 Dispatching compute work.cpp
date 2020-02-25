
#include "14 Dispatching compute work.h"

namespace VulkanLibrary {

  void DispatchComputeWork( VkCommandBuffer command_buffer,
                            uint32_t        x_size,
                            uint32_t        y_size,
                            uint32_t        z_size ) {
    vkCmdDispatch( command_buffer, x_size, y_size, z_size );
  }

} // namespace VulkanLibrary
