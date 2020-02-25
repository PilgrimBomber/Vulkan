

#ifndef CREATING_AN_IMAGE
#define CREATING_AN_IMAGE

#include "common.h"

namespace VulkanLibrary {

  bool CreateImage( VkDevice                logical_device,
                    VkImageType             type,
                    VkFormat                format,
                    VkExtent3D              size,
                    uint32_t                num_mipmaps,
                    uint32_t                num_layers,
                    VkSampleCountFlagBits   samples,
                    VkImageUsageFlags       usage_scenarios,
                    bool                    cubemap,
                    VkImage               & image );

} // namespace VulkanLibrary

#endif // CREATING_AN_IMAGE