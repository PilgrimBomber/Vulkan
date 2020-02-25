

#ifndef PROVIDING_DATA_TO_SHADERS_THROUGH_PUSH_CONSTANTS
#define PROVIDING_DATA_TO_SHADERS_THROUGH_PUSH_CONSTANTS

#include "common.h"

namespace VulkanLibrary {

  void ProvideDataToShadersThroughPushConstants( VkCommandBuffer      command_buffer,
                                                 VkPipelineLayout     pipeline_layout,
                                                 VkShaderStageFlags   pipeline_stages,
                                                 uint32_t             offset,
                                                 uint32_t             size,
                                                 void               * data );

} // namespace VulkanLibrary

#endif // PROVIDING_DATA_TO_SHADERS_THROUGH_PUSH_CONSTANTS