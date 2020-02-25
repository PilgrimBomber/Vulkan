

#ifndef BEGINNING_A_RENDER_PASS
#define BEGINNING_A_RENDER_PASS

#include "common.h"

namespace VulkanLibrary {

  void BeginRenderPass( VkCommandBuffer                   command_buffer,
                        VkRenderPass                      render_pass,
                        VkFramebuffer                     framebuffer,
                        VkRect2D                          render_area,
                        std::vector<VkClearValue> const & clear_values,
                        VkSubpassContents                 subpass_contents );

} // namespace VulkanLibrary

#endif // BEGINNING_A_RENDER_PASS