

#include "05 Specifying pipeline tessellation state.h"

namespace VulkanLibrary {

  void SpecifyPipelineTessellationState( uint32_t                                patch_control_points_count,
                                         VkPipelineTessellationStateCreateInfo & tessellation_state_create_info ) {
    tessellation_state_create_info = {
      VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO,    // VkStructureType                            sType
      nullptr,                                                      // const void                               * pNext
      0,                                                            // VkPipelineTessellationStateCreateFlags     flags
      patch_control_points_count                                    // uint32_t                                   patchControlPoints
    };
  }

} // namespace VulkanLibrary
