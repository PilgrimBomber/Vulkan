

#ifndef SETTING_LINE_WIDTH_STATE_DYNAMICALLY
#define SETTING_LINE_WIDTH_STATE_DYNAMICALLY

#include "common.h"

namespace VulkanLibrary {

  void SetLineWidthStateDynamically( VkCommandBuffer command_buffer,
                                     float           line_width );

} // namespace VulkanLibrary

#endif // SETTING_LINE_WIDTH_STATE_DYNAMICALLY