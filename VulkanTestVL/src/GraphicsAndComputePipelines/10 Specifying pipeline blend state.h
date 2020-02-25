

#ifndef SPECIFYING_PIPELINE_BLEND_STATE
#define SPECIFYING_PIPELINE_BLEND_STATE

#include "common.h"

namespace VulkanLibrary {

  void SpecifyPipelineBlendState( bool                                                     logic_op_enable,
                                  VkLogicOp                                                logic_op,
                                  std::vector<VkPipelineColorBlendAttachmentState> const & attachment_blend_states,
                                  std::array<float, 4> const                             & blend_constants,
                                  VkPipelineColorBlendStateCreateInfo                    & blend_state_create_info );

} // namespace VulkanLibrary

#endif // SPECIFYING_PIPELINE_BLEND_STATE