
#ifndef CREATING_A_DESCRIPTOR_POOL
#define CREATING_A_DESCRIPTOR_POOL

#include "common.h"

namespace VulkanLibrary {

  bool CreateDescriptorPool( VkDevice                                  logical_device,
                             bool                                      free_individual_sets,
                             uint32_t                                  max_sets_count,
                             std::vector<VkDescriptorPoolSize> const & descriptor_types,
                             VkDescriptorPool                        & descriptor_pool );

} // namespace VulkanLibrary

#endif // CREATING_A_DESCRIPTOR_POOL