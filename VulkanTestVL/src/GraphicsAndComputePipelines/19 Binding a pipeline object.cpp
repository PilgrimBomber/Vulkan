

#include "19 Binding a pipeline object.h"

namespace VulkanLibrary {

  void BindPipelineObject( VkCommandBuffer     command_buffer,
                           VkPipelineBindPoint pipeline_type,
                           VkPipeline          pipeline ) {
    vkCmdBindPipeline( command_buffer, pipeline_type, pipeline );
  }

} // namespace VulkanLibrary
