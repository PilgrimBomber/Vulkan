

#ifndef DESTROYING_A_PIPELINE
#define DESTROYING_A_PIPELINE

#include "common.h"

namespace VulkanLibrary {

  void DestroyPipeline( VkDevice     logical_device,
                        VkPipeline & pipeline );

} // namespace VulkanLibrary

#endif // DESTROYING_A_PIPELINE