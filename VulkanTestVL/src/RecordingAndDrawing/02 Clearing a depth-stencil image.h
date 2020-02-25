
#ifndef CLEARING_A_DEPTH_STENCIL_IMAGE
#define CLEARING_A_DEPTH_STENCIL_IMAGE

#include "common.h"

namespace VulkanLibrary {

  void ClearDepthStencilImage( VkCommandBuffer                              command_buffer,
                               VkImage                                      image,
                               VkImageLayout                                image_layout,
                               std::vector<VkImageSubresourceRange> const & image_subresource_ranges,
                               VkClearDepthStencilValue                   & clear_value );

} // namespace VulkanLibrary

#endif // CLEARING_A_DEPTH_STENCIL_IMAGE