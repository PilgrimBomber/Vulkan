#include "06 Providing data to shaders through push constants.h"

namespace VulkanLibrary {

  void ProvideDataToShadersThroughPushConstants( VkCommandBuffer      command_buffer,
                                                 VkPipelineLayout     pipeline_layout,
                                                 VkShaderStageFlags   pipeline_stages,
                                                 uint32_t             offset,
                                                 uint32_t             size,
                                                 void               * data ) {
    vkCmdPushConstants( command_buffer, pipeline_layout, pipeline_stages, offset, size, data );
  }

} // namespace VulkanLibrary
