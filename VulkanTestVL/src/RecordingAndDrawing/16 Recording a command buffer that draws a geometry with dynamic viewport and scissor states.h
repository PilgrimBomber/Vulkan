
#ifndef RECORDING_A_COMMAND_BUFFER_THAT_DRAWS_A_GEOMETRY_WITH_DYNAMIC_VIEWPORT_AND_SCISSOR_STATES
#define RECORDING_A_COMMAND_BUFFER_THAT_DRAWS_A_GEOMETRY_WITH_DYNAMIC_VIEWPORT_AND_SCISSOR_STATES

#include "04 Binding vertex buffers.h"
#include "07 Loading a 3D model from an OBJ file.h"

namespace VulkanLibrary {

  bool RecordCommandBufferThatDrawsGeometryWithDynamicViewportAndScissorStates( VkCommandBuffer                             command_buffer,
                                                                                VkImage                                     swapchain_image,
                                                                                uint32_t                                    present_queue_family_index,
                                                                                uint32_t                                    graphics_queue_family_index,
                                                                                VkRenderPass                                render_pass,
                                                                                VkFramebuffer                               framebuffer,
                                                                                VkExtent2D                                  framebuffer_size,
                                                                                std::vector<VkClearValue> const &           clear_values,
                                                                                VkPipeline                                  graphics_pipeline,
                                                                                uint32_t                                    first_vertex_buffer_binding,
                                                                                std::vector<VertexBufferParameters> const & vertex_buffers_parameters,
                                                                                VkPipelineLayout                            pipeline_layout,
                                                                                std::vector<VkDescriptorSet> const &        descriptor_sets,
                                                                                uint32_t                                    index_for_first_descriptor_set,
                                                                                Mesh const &                                geometry,
                                                                                uint32_t                                    instance_count,
                                                                                uint32_t                                    first_instance );

} // namespace VulkanLibrary

#endif // RECORDING_A_COMMAND_BUFFER_THAT_DRAWS_A_GEOMETRY_WITH_DYNAMIC_VIEWPORT_AND_SCISSOR_STATES