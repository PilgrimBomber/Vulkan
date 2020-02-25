
#ifndef ALLOCATING_DESCRIPTOR_SETS
#define ALLOCATING_DESCRIPTOR_SETS

#include "common.h"

namespace VulkanLibrary {

  bool AllocateDescriptorSets( VkDevice                                   logical_device,
                               VkDescriptorPool                           descriptor_pool,
                               std::vector<VkDescriptorSetLayout> const & descriptor_set_layouts,
                               std::vector<VkDescriptorSet>             & descriptor_sets );

} // namespace VulkanLibrary

#endif // ALLOCATING_DESCRIPTOR_SETS