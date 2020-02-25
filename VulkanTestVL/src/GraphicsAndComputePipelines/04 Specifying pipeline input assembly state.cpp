

#include "04 Specifying pipeline input assembly state.h"

namespace VulkanLibrary {

  void SpecifyPipelineInputAssemblyState( VkPrimitiveTopology                      topology,
                                          bool                                     primitive_restart_enable,
                                          VkPipelineInputAssemblyStateCreateInfo & input_assembly_state_create_info ) {
    input_assembly_state_create_info = {
      VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO,  // VkStructureType                           sType
      nullptr,                                                      // const void                              * pNext
      0,                                                            // VkPipelineInputAssemblyStateCreateFlags   flags
      topology,                                                     // VkPrimitiveTopology                       topology
      primitive_restart_enable                                      // VkBool32                                  primitiveRestartEnable
    };
  }

} // namespace VulkanLibrary
