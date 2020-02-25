

#include "09 Progressing to the next subpass.h"

namespace VulkanLibrary {

  void ProgressToTheNextSubpass( VkCommandBuffer   command_buffer,
                                 VkSubpassContents subpass_contents ) {
    vkCmdNextSubpass( command_buffer, subpass_contents );
  }

} // namespace VulkanLibrary
