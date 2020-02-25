#include "01 Creating a buffer.h"

namespace VulkanLibrary {

  bool CreateBuffer( VkDevice             logical_device,
                     VkDeviceSize         size,
                     VkBufferUsageFlags   usage,
                     VkBuffer           & buffer ) {
    VkBufferCreateInfo buffer_create_info = {
      VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO,   // VkStructureType        sType
      nullptr,                                // const void           * pNext
      0,                                      // VkBufferCreateFlags    flags
      size,                                   // VkDeviceSize           size
      usage,                                  // VkBufferUsageFlags     usage
      VK_SHARING_MODE_EXCLUSIVE,              // VkSharingMode          sharingMode
      0,                                      // uint32_t               queueFamilyIndexCount
      nullptr                                 // const uint32_t       * pQueueFamilyIndices
    };

    VkResult result = vkCreateBuffer( logical_device, &buffer_create_info, nullptr, &buffer );
    if( VK_SUCCESS != result ) {
      std::cout << "Could not create a buffer." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
