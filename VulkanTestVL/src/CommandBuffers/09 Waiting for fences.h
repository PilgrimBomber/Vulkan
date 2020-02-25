#ifndef WAITING_FOR_FENCES
#define WAITING_FOR_FENCES

#include "common.h"

namespace VulkanLibrary {

  bool WaitForFences( VkDevice                     logical_device,
                      std::vector<VkFence> const & fences,
                      VkBool32                     wait_for_all,
                      uint64_t                     timeout );

} // namespace VulkanLibrary

#endif // WAITING_FOR_FENCES