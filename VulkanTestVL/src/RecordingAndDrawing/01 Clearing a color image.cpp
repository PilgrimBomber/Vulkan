
#include "01 Clearing a color image.h"

namespace VulkanLibrary {

  void ClearColorImage( VkCommandBuffer                              command_buffer,
                        VkImage                                      image,
                        VkImageLayout                                image_layout,
                        std::vector<VkImageSubresourceRange> const & image_subresource_ranges,
                        VkClearColorValue                          & clear_color ) {
    vkCmdClearColorImage( command_buffer, image, image_layout, &clear_color, static_cast<uint32_t>(image_subresource_ranges.size()), image_subresource_ranges.data() );
  }

} // namespace VulkanLibrary
