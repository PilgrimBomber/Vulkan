
#include "03 Clearing render pass attachments.h"

namespace VulkanLibrary {

  void ClearRenderPassAttachments( VkCommandBuffer                        command_buffer,
                                   std::vector<VkClearAttachment> const & attachments,
                                   std::vector<VkClearRect> const       & rects ) {
    vkCmdClearAttachments( command_buffer, static_cast<uint32_t>(attachments.size()), attachments.data(), static_cast<uint32_t>(rects.size()), rects.data() );
  }

} // namespace VulkanLibrary
