#ifndef RESETTING_FENCES
#define RESETTING_FENCES

#include "common.h"

namespace VulkanLibrary {

  bool ResetFences( VkDevice                     logical_device,
                    std::vector<VkFence> const & fences );

} // namespace VulkanLibrary

#endif // RESETTING_FENCES