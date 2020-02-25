
#ifndef PREPARING_A_RENDER_PASS_AND_A_FRAMEBUFFER_WITH_COLOR_AND_DEPTH_ATTACHMENTS
#define PREPARING_A_RENDER_PASS_AND_A_FRAMEBUFFER_WITH_COLOR_AND_DEPTH_ATTACHMENTS

#include "common.h"

namespace VulkanLibrary {

  bool PrepareRenderPassAndFramebufferWithColorAndDepthAttachments( VkPhysicalDevice        physical_device,
                                                                    VkDevice                logical_device,
                                                                    uint32_t                width,
                                                                    uint32_t                height,
                                                                    VkImage               & color_image,
                                                                    VkDeviceMemory        & color_image_memory_object,
                                                                    VkImageView           & color_image_view,
                                                                    VkImage               & depth_image,
                                                                    VkDeviceMemory        & depth_image_memory_object,
                                                                    VkImageView           & depth_image_view,
                                                                    VkRenderPass          & render_pass,
                                                                    VkFramebuffer         & framebuffer );

} // namespace VulkanLibrary

#endif // PREPARING_A_RENDER_PASS_AND_A_FRAMEBUFFER_WITH_COLOR_AND_DEPTH_ATTACHMENTS