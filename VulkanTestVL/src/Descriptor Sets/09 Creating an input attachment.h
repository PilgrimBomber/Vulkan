
#ifndef CREATING_AN_INPUT_ATTACHMENT
#define CREATING_AN_INPUT_ATTACHMENT

#include "common.h"

namespace VulkanLibrary {

  bool CreateInputAttachment( VkPhysicalDevice     physical_device,
                              VkDevice             logical_device,
                              VkImageType          type,
                              VkFormat             format,
                              VkExtent3D           size,
                              VkImageUsageFlags    usage,
                              VkImageViewType      view_type,
                              VkImageAspectFlags   aspect,
                              VkImage            & input_attachment,
                              VkDeviceMemory     & memory_object,
                              VkImageView        & input_attachment_image_view );

} // namespace VulkanLibrary

#endif // CREATING_AN_INPUT_ATTACHMENT