
#ifndef CREATING_DESCRIPTORS_WITH_A_TEXTURE_AND_A_UNIFORM_BUFFER
#define CREATING_DESCRIPTORS_WITH_A_TEXTURE_AND_A_UNIFORM_BUFFER

#include "common.h"

namespace VulkanLibrary {

  bool CreateDescriptorsWithTextureAndUniformBuffer( VkPhysicalDevice               physical_device,
                                                     VkDevice                       logical_device,
                                                     VkExtent3D                     sampled_image_size,
                                                     uint32_t                       uniform_buffer_size,
                                                     VkSampler                    & sampler,
                                                     VkImage                      & sampled_image,
                                                     VkDeviceMemory               & sampled_image_memory_object,
                                                     VkImageView                  & sampled_image_view,
                                                     VkBuffer                     & uniform_buffer,
                                                     VkDeviceMemory               & uniform_buffer_memory_object,
                                                     VkDescriptorSetLayout        & descriptor_set_layout,
                                                     VkDescriptorPool             & descriptor_pool,
                                                     std::vector<VkDescriptorSet> & descriptor_sets );

} // namespace VulkanLibrary

#endif // CREATING_DESCRIPTORS_WITH_A_TEXTURE_AND_A_UNIFORM_BUFFER