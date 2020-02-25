

#ifndef BINDING_A_PIPELINE_OBJECT
#define BINDING_A_PIPELINE_OBJECT

#include "common.h"

namespace VulkanLibrary {

  void BindPipelineObject( VkCommandBuffer     command_buffer,
                           VkPipelineBindPoint pipeline_type,
                           VkPipeline          pipeline );

} // namespace VulkanLibrary

#endif // BINDING_A_PIPELINE_OBJECT