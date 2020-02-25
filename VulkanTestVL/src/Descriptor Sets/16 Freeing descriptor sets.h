

#ifndef FREEING_DESCRIPTOR_SETS
#define FREEING_DESCRIPTOR_SETS

#include "common.h"

namespace VulkanLibrary {

  bool FreeDescriptorSets( VkDevice                       logical_device,
                           VkDescriptorPool               descriptor_pool,
                           std::vector<VkDescriptorSet> & descriptor_sets );

} // namespace VulkanLibrary

#endif // FREEING_DESCRIPTOR_SETS