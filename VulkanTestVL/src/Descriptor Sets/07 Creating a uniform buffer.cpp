
#include "01 Creating a buffer.h"
#include "02 Allocating and binding memory object to a buffer.h"
#include "07 Creating a uniform buffer.h"

namespace VulkanLibrary {

  bool CreateUniformBuffer( VkPhysicalDevice     physical_device,
                            VkDevice             logical_device,
                            VkDeviceSize         size,
                            VkBufferUsageFlags   usage,
                            VkBuffer           & uniform_buffer,
                            VkDeviceMemory     & memory_object ) {
    if( !CreateBuffer( logical_device, size, usage | VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT, uniform_buffer ) ) {
      return false;
    }

    if( !AllocateAndBindMemoryObjectToBuffer( physical_device, logical_device, uniform_buffer, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, memory_object ) ) {
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
