
#ifndef CLEARING_A_COLOR_IMAGE
#define CLEARING_A_COLOR_IMAGE

#include "common.h"

namespace VulkanLibrary {

  void ClearColorImage( VkCommandBuffer                              command_buffer,
                        VkImage                                      image,
                        VkImageLayout                                image_layout,
                        std::vector<VkImageSubresourceRange> const & image_subresource_ranges,
                        VkClearColorValue                          & clear_color );

} // namespace VulkanLibrary

#endif // CLEARING_A_COLOR_IMAGE