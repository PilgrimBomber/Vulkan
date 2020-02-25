
#include "02 Clearing a depth-stencil image.h"

namespace VulkanLibrary {

  void ClearDepthStencilImage( VkCommandBuffer                              command_buffer,
                               VkImage                                      image,
                               VkImageLayout                                image_layout,
                               std::vector<VkImageSubresourceRange> const & image_subresource_ranges,
                               VkClearDepthStencilValue                   & clear_value ) {
    vkCmdClearDepthStencilImage( command_buffer, image, image_layout, &clear_value, static_cast<uint32_t>(image_subresource_ranges.size()), image_subresource_ranges.data() );
  }

} // namespace VulkanLibrary
