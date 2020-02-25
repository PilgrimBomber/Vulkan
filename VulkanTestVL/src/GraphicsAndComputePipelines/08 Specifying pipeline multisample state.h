
#ifndef SPECIFYING_PIPELINE_MULTISAMPLE_STATE
#define SPECIFYING_PIPELINE_MULTISAMPLE_STATE

#include "common.h"

namespace VulkanLibrary {

  void SpecifyPipelineMultisampleState( VkSampleCountFlagBits                  sample_count,
                                        bool                                   per_sample_shading_enable,
                                        float                                  min_sample_shading,
                                        VkSampleMask const                   * sample_masks,
                                        bool                                   alpha_to_coverage_enable,
                                        bool                                   alpha_to_one_enable,
                                        VkPipelineMultisampleStateCreateInfo & multisample_state_create_info );

} // namespace VulkanLibrary

#endif // SPECIFYING_PIPELINE_MULTISAMPLE_STATE