

#ifndef CREATING_A_FRAMEBUFFER
#define CREATING_A_FRAMEBUFFER

#include "common.h"

namespace VulkanLibrary {

  bool CreateFramebuffer( VkDevice                         logical_device,
                          VkRenderPass                     render_pass,
                          std::vector<VkImageView> const & attachments,
                          uint32_t                         width,
                          uint32_t                         height,
                          uint32_t                         layers,
                          VkFramebuffer                  & framebuffer );

} // namespace VulkanLibrary

#endif // CREATING_A_FRAMEBUFFER