

#ifndef SPECIFYING_PIPELINE_VERTEX_INPUT_STATE
#define SPECIFYING_PIPELINE_VERTEX_INPUT_STATE

#include "common.h"

namespace VulkanLibrary {

  void SpecifyPipelineVertexInputState( std::vector<VkVertexInputBindingDescription> const   & binding_descriptions,
                                        std::vector<VkVertexInputAttributeDescription> const & attribute_descriptions,
                                        VkPipelineVertexInputStateCreateInfo                 & vertex_input_state_create_info );

} // namespace VulkanLibrary

#endif // SPECIFYING_PIPELINE_VERTEX_INPUT_STATE