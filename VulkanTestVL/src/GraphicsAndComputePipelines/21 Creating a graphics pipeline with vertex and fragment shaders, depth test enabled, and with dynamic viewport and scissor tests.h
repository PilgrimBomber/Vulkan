
#ifndef CREATING_A_GRAPHICS_PIPELINE_WITH_VERTEX_AND_FRAGMENT_SHADERS_DEPTH_TEST_ENABLED_AND_WITH_DYNAMIC_VIEWPORT_AND_SCISSOR_TESTS
#define CREATING_A_GRAPHICS_PIPELINE_WITH_VERTEX_AND_FRAGMENT_SHADERS_DEPTH_TEST_ENABLED_AND_WITH_DYNAMIC_VIEWPORT_AND_SCISSOR_TESTS

#include "common.h"

namespace VulkanLibrary {

  bool CreateGraphicsPipelineWithVertexAndFragmentShadersDepthTestEnabledAndWithDynamicViewportAndScissorTests( VkDevice                                                 logical_device,
                                                                                                                VkPipelineCreateFlags                                    additional_options,
                                                                                                                std::string const                                      & vertex_shader_filename,
                                                                                                                std::string const                                      & fragment_shader_filename,
                                                                                                                std::vector<VkVertexInputBindingDescription> const     & vertex_input_binding_descriptions,
                                                                                                                std::vector<VkVertexInputAttributeDescription> const   & vertex_attribute_descriptions,
                                                                                                                VkPrimitiveTopology                                      primitive_topology,
                                                                                                                bool                                                     primitive_restart_enable,
                                                                                                                VkPolygonMode                                            polygon_mode,
                                                                                                                VkCullModeFlags                                          culling_mode,
                                                                                                                VkFrontFace                                              front_face,
                                                                                                                bool                                                     logic_op_enable,
                                                                                                                VkLogicOp                                                logic_op,
                                                                                                                std::vector<VkPipelineColorBlendAttachmentState> const & attachment_blend_states,
                                                                                                                std::array<float, 4> const                             & blend_constants,
                                                                                                                VkPipelineLayout                                         pipeline_layout,
                                                                                                                VkRenderPass                                             render_pass,
                                                                                                                uint32_t                                                 subpass,
                                                                                                                VkPipeline                                               base_pipeline_handle,
                                                                                                                VkPipelineCache                                          pipeline_cache,
                                                                                                                std::vector<VkPipeline>                                & graphics_pipeline );

} // namespace VulkanLibrary

#endif // CREATING_A_GRAPHICS_PIPELINE_WITH_VERTEX_AND_FRAGMENT_SHADERS_DEPTH_TEST_ENABLED_AND_WITH_DYNAMIC_VIEWPORT_AND_SCISSOR_TESTS