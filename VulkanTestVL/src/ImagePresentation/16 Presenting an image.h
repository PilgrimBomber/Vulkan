
#ifndef PRESENTING_AN_IMAGE
#define PRESENTING_AN_IMAGE

#include "common.h"

namespace VulkanLibrary {

  struct PresentInfo {
    VkSwapchainKHR  Swapchain;
    uint32_t        ImageIndex;
  };

  bool PresentImage( VkQueue                  queue,
                     std::vector<VkSemaphore> rendering_semaphores,
                     std::vector<PresentInfo> images_to_present );

} // namespace VulkanLibrary

#endif // PRESENTING_AN_IMAGE