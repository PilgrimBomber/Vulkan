
#ifndef DESTROYING_A_PIPELINE_LAYOUT
#define DESTROYING_A_PIPELINE_LAYOUT

#include "common.h"

namespace VulkanLibrary {

  void DestroyPipelineLayout( VkDevice           logical_device,
                              VkPipelineLayout & pipeline_layout );

} // namespace VulkanLibrary

#endif // DESTROYING_A_PIPELINE_LAYOUT