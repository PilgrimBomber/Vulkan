

#ifndef SPECIFYING_PIPELINE_RASTERIZATION_STATE
#define SPECIFYING_PIPELINE_RASTERIZATION_STATE

#include "common.h"

namespace VulkanLibrary {

  void SpecifyPipelineRasterizationState( bool                                     depth_clamp_enable,
                                          bool                                     rasterizer_discard_enable,
                                          VkPolygonMode                            polygon_mode,
                                          VkCullModeFlags                          culling_mode,
                                          VkFrontFace                              front_face,
                                          bool                                     depth_bias_enable,
                                          float                                    depth_bias_constant_factor,
                                          float                                    depth_bias_clamp,
                                          float                                    depth_bias_slope_factor,
                                          float                                    line_width,
                                          VkPipelineRasterizationStateCreateInfo & rasterization_state_create_info );

} // namespace VulkanLibrary

#endif // SPECIFYING_PIPELINE_RASTERIZATION_STATE