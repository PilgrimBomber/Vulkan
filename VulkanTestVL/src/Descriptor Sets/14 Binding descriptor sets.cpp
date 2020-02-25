
#include "14 Binding descriptor sets.h"

namespace VulkanLibrary {

  void BindDescriptorSets( VkCommandBuffer                      command_buffer,
                           VkPipelineBindPoint                  pipeline_type,
                           VkPipelineLayout                     pipeline_layout,
                           uint32_t                             index_for_first_set,
                           std::vector<VkDescriptorSet> const & descriptor_sets,
                           std::vector<uint32_t> const        & dynamic_offsets ) {
    vkCmdBindDescriptorSets( command_buffer, pipeline_type, pipeline_layout, index_for_first_set,
      static_cast<uint32_t>(descriptor_sets.size()), descriptor_sets.data(),
      static_cast<uint32_t>(dynamic_offsets.size()), dynamic_offsets.data() );
  }

} // namespace VulkanLibrary
