
#ifndef CREATING_A_LAYERED_2D_IMAGE_WITH_CUBEMAP_VIEW
#define CREATING_A_LAYERED_2D_IMAGE_WITH_CUBEMAP_VIEW

#include "common.h"

namespace VulkanLibrary {

  bool CreateLayered2DImageWithCubemapView( VkPhysicalDevice    physical_device,
                                            VkDevice            logical_device,
                                            uint32_t            size,
                                            uint32_t            num_mipmaps,
                                            VkImageUsageFlags   usage,
                                            VkImageAspectFlags  aspect,
                                            VkImage           & image,
                                            VkDeviceMemory    & memory_object,
                                            VkImageView       & image_view );

} // namespace VulkanLibrary

#endif // CREATING_A_LAYERED_2D_IMAGE_WITH_CUBEMAP_VIEW