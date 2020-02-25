

#ifndef SPECIFYING_PIPELINE_INPUT_ASSEMBLY_STATE
#define SPECIFYING_PIPELINE_INPUT_ASSEMBLY_STATE

#include "common.h"

namespace VulkanLibrary {

  void SpecifyPipelineInputAssemblyState( VkPrimitiveTopology                      topology,
                                          bool                                     primitive_restart_enable,
                                          VkPipelineInputAssemblyStateCreateInfo & input_assembly_state_create_info );

} // namespace VulkanLibrary

#endif // SPECIFYING_PIPELINE_INPUT_ASSEMBLY_STATE