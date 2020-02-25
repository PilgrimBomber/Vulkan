
#ifndef CREATING_A_DESCRIPTOR_SET_LAYOUT
#define CREATING_A_DESCRIPTOR_SET_LAYOUT

#include "common.h"

namespace VulkanLibrary {

  bool CreateDescriptorSetLayout( VkDevice                                          logical_device,
                                  std::vector<VkDescriptorSetLayoutBinding> const & bindings,
                                  VkDescriptorSetLayout                           & descriptor_set_layout );

} // namespace VulkanLibrary

#endif // CREATING_A_DESCRIPTOR_SET_LAYOUT