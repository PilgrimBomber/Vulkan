
#ifndef CLEARING_RENDER_PASS_ATTACHMENTS
#define CLEARING_RENDER_PASS_ATTACHMENTS

#include "common.h"

namespace VulkanLibrary {

  void ClearRenderPassAttachments( VkCommandBuffer                        command_buffer,
                                   std::vector<VkClearAttachment> const & attachments,
                                   std::vector<VkClearRect> const       & rects );

} // namespace VulkanLibrary

#endif // CLEARING_RENDER_PASS_ATTACHMENTS