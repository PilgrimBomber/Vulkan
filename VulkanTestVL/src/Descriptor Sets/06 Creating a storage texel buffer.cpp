#include "01 Creating a buffer.h"
#include "02 Allocating and binding memory object to a buffer.h"
#include "04 Creating a buffer view.h"
#include "06 Creating a storage texel buffer.h"

namespace VulkanLibrary {

  bool CreateStorageTexelBuffer( VkPhysicalDevice     physical_device,
                                 VkDevice             logical_device,
                                 VkFormat             format,
                                 VkDeviceSize         size,
                                 VkBufferUsageFlags   usage,
                                 bool                 atomic_operations,
                                 VkBuffer           & storage_texel_buffer,
                                 VkDeviceMemory     & memory_object,
                                 VkBufferView       & storage_texel_buffer_view ) {
    VkFormatProperties format_properties;
    vkGetPhysicalDeviceFormatProperties( physical_device, format, &format_properties );
    if( !(format_properties.bufferFeatures & VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT) ) {
      std::cout << "Provided format is not supported for a uniform texel buffer." << std::endl;
      return false;
    }

    if( atomic_operations &&
        !(format_properties.bufferFeatures & VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT) ) {
      std::cout << "Provided format is not supported for atomic operations on storage texel buffers." << std::endl;
      return false;
    }

    if( !CreateBuffer( logical_device, size, usage | VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT, storage_texel_buffer ) ) {
      return false;
    }

    if( !AllocateAndBindMemoryObjectToBuffer( physical_device, logical_device, storage_texel_buffer, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, memory_object ) ) {
      return false;
    }

    if( !CreateBufferView( logical_device, storage_texel_buffer, format, 0, VK_WHOLE_SIZE, storage_texel_buffer_view ) ) {
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
