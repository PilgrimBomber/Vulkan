#include "01 Creating a command pool.h"

namespace VulkanLibrary {

  bool CreateCommandPool( VkDevice                   logical_device,
                          VkCommandPoolCreateFlags   parameters,
                          uint32_t                   queue_family,
                          VkCommandPool            & command_pool ) {
    VkCommandPoolCreateInfo command_pool_create_info = {
      VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,   // VkStructureType              sType
      nullptr,                                      // const void                 * pNext
      parameters,                                   // VkCommandPoolCreateFlags     flags
      queue_family                                  // uint32_t                     queueFamilyIndex
    };

    VkResult result = vkCreateCommandPool( logical_device, &command_pool_create_info, nullptr, &command_pool );
    if( VK_SUCCESS != result ) {
      std::cout << "Could not create command pool." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
