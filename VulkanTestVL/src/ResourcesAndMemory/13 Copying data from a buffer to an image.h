
#ifndef COPYING_DATA_FROM_A_BUFFER_TO_AN_IMAGE
#define COPYING_DATA_FROM_A_BUFFER_TO_AN_IMAGE

#include "common.h"

namespace VulkanLibrary {

  void CopyDataFromBufferToImage( VkCommandBuffer                command_buffer,
                                  VkBuffer                       source_buffer,
                                  VkImage                        destination_image,
                                  VkImageLayout                  image_layout,
                                  std::vector<VkBufferImageCopy> regions );

} // namespace VulkanLibrary

#endif // COPYING_DATA_FROM_A_BUFFER_TO_AN_IMAGE