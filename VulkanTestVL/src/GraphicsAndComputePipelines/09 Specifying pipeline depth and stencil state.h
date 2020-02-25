

#ifndef SPECIFYING_PIPELINE_DEPTH_AND_STENCIL_STATE
#define SPECIFYING_PIPELINE_DEPTH_AND_STENCIL_STATE

#include "common.h"

namespace VulkanLibrary {

  void SpecifyPipelineDepthAndStencilState( bool                                    depth_test_enable,
                                            bool                                    depth_write_enable,
                                            VkCompareOp                             depth_compare_op,
                                            bool                                    depth_bounds_test_enable,
                                            float                                   min_depth_bounds,
                                            float                                   max_depth_bounds,
                                            bool                                    stencil_test_enable,
                                            VkStencilOpState                        front_stencil_test_parameters,
                                            VkStencilOpState                        back_stencil_test_parameters,
                                            VkPipelineDepthStencilStateCreateInfo & depth_and_stencil_state_create_info );

} // namespace VulkanLibrary

#endif // SPECIFYING_PIPELINE_DEPTH_AND_STENCIL_STATE