

#include "03 Specifying pipeline vertex input state.h"

namespace VulkanLibrary {

  void SpecifyPipelineVertexInputState( std::vector<VkVertexInputBindingDescription> const   & binding_descriptions,
                                        std::vector<VkVertexInputAttributeDescription> const & attribute_descriptions,
                                        VkPipelineVertexInputStateCreateInfo                 & vertex_input_state_create_info ) {
    vertex_input_state_create_info = {
      VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO,    // VkStructureType                           sType
      nullptr,                                                      // const void                              * pNext
      0,                                                            // VkPipelineVertexInputStateCreateFlags     flags
      static_cast<uint32_t>(binding_descriptions.size()),           // uint32_t                                  vertexBindingDescriptionCount
      binding_descriptions.data(),                                  // const VkVertexInputBindingDescription   * pVertexBindingDescriptions
      static_cast<uint32_t>(attribute_descriptions.size()),         // uint32_t                                  vertexAttributeDescriptionCount
      attribute_descriptions.data()                                 // const VkVertexInputAttributeDescription * pVertexAttributeDescriptions
    };
  }

} // namespace VulkanLibrary
