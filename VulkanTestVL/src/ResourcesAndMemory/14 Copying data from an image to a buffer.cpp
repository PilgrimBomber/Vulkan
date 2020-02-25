#include "14 Copying data from an image to a buffer.h"

namespace VulkanLibrary {

  void CopyDataFromImageToBuffer( VkCommandBuffer                command_buffer,
                                  VkImage                        source_image,
                                  VkImageLayout                  image_layout,
                                  VkBuffer                       destination_buffer,
                                  std::vector<VkBufferImageCopy> regions ) {
    if( regions.size() > 0 ) {
      vkCmdCopyImageToBuffer( command_buffer, source_image, image_layout, destination_buffer, static_cast<uint32_t>(regions.size()), regions.data() );
    }
  }

} // namespace VulkanLibrary
