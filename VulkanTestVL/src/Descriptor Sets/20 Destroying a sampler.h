

#ifndef DESTROYING_A_SAMPLER
#define DESTROYING_A_SAMPLER

#include "common.h"

namespace VulkanLibrary {

  void DestroySampler( VkDevice    logical_device,
                       VkSampler & sampler );

} // namespace VulkanLibrary

#endif // DESTROYING_A_SAMPLER