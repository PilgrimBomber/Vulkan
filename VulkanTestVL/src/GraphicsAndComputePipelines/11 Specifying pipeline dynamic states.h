

#ifndef SPECIFYING_PIPELINE_DYNAMIC_STATES
#define SPECIFYING_PIPELINE_DYNAMIC_STATES

#include "common.h"

namespace VulkanLibrary {

  void SpecifyPipelineDynamicStates( std::vector<VkDynamicState> const & dynamic_states,
                                     VkPipelineDynamicStateCreateInfo  & dynamic_state_creat_info );

} // namespace VulkanLibrary

#endif // SPECIFYING_PIPELINE_DYNAMIC_STATES