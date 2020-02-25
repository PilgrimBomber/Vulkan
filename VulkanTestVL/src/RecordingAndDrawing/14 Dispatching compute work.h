
#ifndef DISPATCHING_A_COMPUTE_WORK
#define DISPATCHING_A_COMPUTE_WORK

#include "common.h"

namespace VulkanLibrary {

  void DispatchComputeWork( VkCommandBuffer command_buffer,
                            uint32_t        x_size,
                            uint32_t        y_size,
                            uint32_t        z_size );

} // namespace VulkanLibrary

#endif // DISPATCHING_A_COMPUTE_WORK