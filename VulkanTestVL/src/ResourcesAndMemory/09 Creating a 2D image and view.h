
#ifndef CREATING_A_2D_IMAGE_AND_VIEW
#define CREATING_A_2D_IMAGE_AND_VIEW

#include "common.h"

namespace VulkanLibrary {

  bool Create2DImageAndView( VkPhysicalDevice        physical_device,
                             VkDevice                logical_device,
                             VkFormat                format,
                             VkExtent2D              size,
                             uint32_t                num_mipmaps,
                             uint32_t                num_layers,
                             VkSampleCountFlagBits   samples,
                             VkImageUsageFlags       usage,
                             VkImageAspectFlags      aspect,
                             VkImage               & image,
                             VkDeviceMemory        & memory_object,
                             VkImageView           & image_view );

} // namespace VulkanLibrary

#endif // CREATING_A_2D_IMAGE_AND_VIEW