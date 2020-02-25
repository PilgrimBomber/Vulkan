#ifndef CREATING_A_STORAGE_IMAGE
#define CREATING_A_STORAGE_IMAGE

#include "common.h"

namespace VulkanLibrary {

  bool CreateStorageImage( VkPhysicalDevice    physical_device,
                           VkDevice            logical_device,
                           VkImageType         type,
                           VkFormat            format,
                           VkExtent3D          size,
                           uint32_t            num_mipmaps,
                           uint32_t            num_layers,
                           VkImageUsageFlags   usage,
                           VkImageViewType     view_type,
                           VkImageAspectFlags  aspect,
                           bool                atomic_operations,
                           VkImage           & storage_image,
                           VkDeviceMemory    & memory_object,
                           VkImageView       & storage_image_view );

} // namespace VulkanLibrary

#endif // CREATING_A_STORAGE_IMAGE