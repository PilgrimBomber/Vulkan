

#ifndef COPYING_DATA_FROM_AN_IMAGE_TO_A_BUFFER
#define COPYING_DATA_FROM_AN_IMAGE_TO_A_BUFFER

#include "common.h"

namespace VulkanLibrary {

  void CopyDataFromImageToBuffer( VkCommandBuffer                command_buffer,
                                  VkImage                        source_image,
                                  VkImageLayout                  image_layout,
                                  VkBuffer                       destination_buffer,
                                  std::vector<VkBufferImageCopy> regions );

} // namespace VulkanLibrary

#endif // COPYING_DATA_FROM_AN_IMAGE_TO_A_BUFFER