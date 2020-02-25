

#ifndef PROGRESSING_TO_THE_NEXT_SUBPASS
#define PROGRESSING_TO_THE_NEXT_SUBPASS

#include "common.h"

namespace VulkanLibrary {

  void ProgressToTheNextSubpass( VkCommandBuffer   command_buffer,
                                 VkSubpassContents subpass_contents );

} // namespace VulkanLibrary

#endif // PROGRESSING_TO_THE_NEXT_SUBPASS