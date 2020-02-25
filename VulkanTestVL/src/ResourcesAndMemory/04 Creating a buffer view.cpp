#include "04 Creating a buffer view.h"

namespace VulkanLibrary {

  bool CreateBufferView( VkDevice       logical_device,
                         VkBuffer       buffer,
                         VkFormat       format,
                         VkDeviceSize   memory_offset,
                         VkDeviceSize   memory_range,
                         VkBufferView & buffer_view ) {
    VkBufferViewCreateInfo buffer_view_create_info = {
      VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO,    // VkStructureType            sType
      nullptr,                                      // const void               * pNext
      0,                                            // VkBufferViewCreateFlags    flags
      buffer,                                       // VkBuffer                   buffer
      format,                                       // VkFormat                   format
      memory_offset,                                // VkDeviceSize               offset
      memory_range                                  // VkDeviceSize               range
    };

    VkResult result = vkCreateBufferView( logical_device, &buffer_view_create_info, nullptr, &buffer_view );
    if( VK_SUCCESS != result ) {
      std::cout << "Could not creat buffer view." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
