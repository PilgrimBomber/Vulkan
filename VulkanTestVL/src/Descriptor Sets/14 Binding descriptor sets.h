
#ifndef BINDING_DESCRIPTOR_SETS
#define BINDING_DESCRIPTOR_SETS

#include "common.h"

namespace VulkanLibrary {

  void BindDescriptorSets( VkCommandBuffer                      command_buffer,
                           VkPipelineBindPoint                  pipeline_type,
                           VkPipelineLayout                     pipeline_layout,
                           uint32_t                             index_for_first_set,
                           std::vector<VkDescriptorSet> const & descriptor_sets,
                           std::vector<uint32_t> const        & dynamic_offsets );

} // namespace VulkanLibrary

#endif // BINDING_DESCRIPTOR_SETS