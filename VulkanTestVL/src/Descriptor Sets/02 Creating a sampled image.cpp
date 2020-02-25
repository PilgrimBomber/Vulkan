
#include "05 Creating an image.h"
#include "06 Allocating and binding memory object to an image.h"
#include "08 Creating an image view.h"
#include "02 Creating a sampled image.h"

namespace VulkanLibrary {

  bool CreateSampledImage( VkPhysicalDevice    physical_device,
                           VkDevice            logical_device,
                           VkImageType         type,
                           VkFormat            format,
                           VkExtent3D          size,
                           uint32_t            num_mipmaps,
                           uint32_t            num_layers,
                           VkImageUsageFlags   usage,
                           VkImageViewType     view_type,
                           VkImageAspectFlags  aspect,
                           bool                linear_filtering,
                           VkImage           & sampled_image,
                           VkDeviceMemory    & memory_object,
                           VkImageView       & sampled_image_view ) {
    VkFormatProperties format_properties;
    vkGetPhysicalDeviceFormatProperties( physical_device, format, &format_properties );
    if( !(format_properties.optimalTilingFeatures & VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT) ) {
      std::cout << "Provided format is not supported for a sampled image." << std::endl;
      return false;
    }
    if( linear_filtering &&
        !(format_properties.optimalTilingFeatures & VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT) ) {
      std::cout << "Provided format is not supported for a linear image filtering." << std::endl;
      return false;
    }

    if( !CreateImage( logical_device, type, format, size, num_mipmaps, num_layers, VK_SAMPLE_COUNT_1_BIT, usage | VK_IMAGE_USAGE_SAMPLED_BIT, false, sampled_image ) ) {
      return false;
    }

    if( !AllocateAndBindMemoryObjectToImage( physical_device, logical_device, sampled_image, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, memory_object ) ) {
      return false;
    }

    if( !CreateImageView( logical_device, sampled_image, view_type, format, aspect, sampled_image_view ) ) {
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
