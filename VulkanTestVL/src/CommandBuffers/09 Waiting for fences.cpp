
#include "09 Waiting for fences.h"

namespace VulkanLibrary {

  bool WaitForFences( VkDevice                     logical_device,
                      std::vector<VkFence> const & fences,
                      VkBool32                     wait_for_all,
                      uint64_t                     timeout ) {
    if( fences.size() > 0 ) {
      VkResult result = vkWaitForFences( logical_device, static_cast<uint32_t>(fences.size()), fences.data(), wait_for_all, timeout );
      if( VK_SUCCESS != result ) {
        std::cout << "Waiting on fence failed." << std::endl;
        return false;
      }
      return true;
    }
    return false;
  }

} // namespace VulkanLibrary
