
#ifndef SETTING_AN_IMAGE_MEMORY_BARRIER
#define SETTING_AN_IMAGE_MEMORY_BARRIER

#include "common.h"

namespace VulkanLibrary {

  struct ImageTransition {
    VkImage             Image;
    VkAccessFlags       CurrentAccess;
    VkAccessFlags       NewAccess;
    VkImageLayout       CurrentLayout;
    VkImageLayout       NewLayout;
    uint32_t            CurrentQueueFamily;
    uint32_t            NewQueueFamily;
    VkImageAspectFlags  Aspect;
  };

  void SetImageMemoryBarrier( VkCommandBuffer              command_buffer,
                              VkPipelineStageFlags         generating_stages,
                              VkPipelineStageFlags         consuming_stages,
                              std::vector<ImageTransition> image_transitions );

} // namespace VulkanLibrary

#endif // SETTING_AN_IMAGE_MEMORY_BARRIER