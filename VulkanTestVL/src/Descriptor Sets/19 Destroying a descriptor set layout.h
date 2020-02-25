
#ifndef DESTROYING_A_DESCRIPTOR_SET_LAYOUT
#define DESTROYING_A_DESCRIPTOR_SET_LAYOUT

#include "common.h"

namespace VulkanLibrary {

  void DestroyDescriptorSetLayout( VkDevice                logical_device,
                                   VkDescriptorSetLayout & descriptor_set_layout );

} // namespace VulkanLibrary

#endif // DESTROYING_A_DESCRIPTOR_SET_LAYOUT