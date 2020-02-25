

#ifndef SPECIFYING_PIPELINE_VIEWPORT_AND_SCISSOR_TEST_STATE
#define SPECIFYING_PIPELINE_VIEWPORT_AND_SCISSOR_TEST_STATE

#include "common.h"

namespace VulkanLibrary {

  struct ViewportInfo {
    std::vector<VkViewport>   Viewports;
    std::vector<VkRect2D>     Scissors;
  };

  void SpecifyPipelineViewportAndScissorTestState( ViewportInfo const                & viewport_infos,
                                                   VkPipelineViewportStateCreateInfo & viewport_state_create_info );

} // namespace VulkanLibrary

#endif // SPECIFYING_PIPELINE_VIEWPORT_AND_SCISSOR_TEST_STATE