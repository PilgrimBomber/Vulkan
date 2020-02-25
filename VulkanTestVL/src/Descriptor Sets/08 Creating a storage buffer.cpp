#include "01 Creating a buffer.h"
#include "02 Allocating and binding memory object to a buffer.h"
#include "08 Creating a storage buffer.h"

namespace VulkanLibrary {

  bool CreateStorageBuffer( VkPhysicalDevice     physical_device,
                            VkDevice             logical_device,
                            VkDeviceSize         size,
                            VkBufferUsageFlags   usage,
                            VkBuffer           & storage_buffer,
                            VkDeviceMemory     & memory_object ) {
    if( !CreateBuffer( logical_device, size, usage | VK_BUFFER_USAGE_STORAGE_BUFFER_BIT, storage_buffer ) ) {
      return false;
    }

    if( !AllocateAndBindMemoryObjectToBuffer( physical_device, logical_device, storage_buffer, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, memory_object ) ) {
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
