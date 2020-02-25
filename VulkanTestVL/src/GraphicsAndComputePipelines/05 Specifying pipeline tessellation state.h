

#ifndef SPECIFYING_PIPELINE_TESSELLATION_STATE
#define SPECIFYING_PIPELINE_TESSELLATION_STATE

#include "common.h"

namespace VulkanLibrary {

  void SpecifyPipelineTessellationState( uint32_t                                patch_control_points_count,
                                         VkPipelineTessellationStateCreateInfo & tessellation_state_create_info );

} // namespace VulkanLibrary

#endif // SPECIFYING_PIPELINE_TESSELLATION_STATE