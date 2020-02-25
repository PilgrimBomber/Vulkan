#include "13 Copying data from a buffer to an image.h"

namespace VulkanLibrary {

  void CopyDataFromBufferToImage( VkCommandBuffer                command_buffer,
                                  VkBuffer                       source_buffer,
                                  VkImage                        destination_image,
                                  VkImageLayout                  image_layout,
                                  std::vector<VkBufferImageCopy> regions ) {
    if( regions.size() > 0 ) {
      vkCmdCopyBufferToImage( command_buffer, source_buffer, destination_image, image_layout, static_cast<uint32_t>(regions.size()), regions.data() );
    }
  }

} // namespace VulkanLibrary
