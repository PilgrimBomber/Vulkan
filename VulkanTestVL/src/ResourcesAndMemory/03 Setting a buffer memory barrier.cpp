#include "03 Setting a buffer memory barrier.h"

namespace VulkanLibrary {

  void SetBufferMemoryBarrier( VkCommandBuffer               command_buffer,
                               VkPipelineStageFlags          generating_stages,
                               VkPipelineStageFlags          consuming_stages,
                               std::vector<BufferTransition> buffer_transitions ) {

    std::vector<VkBufferMemoryBarrier> buffer_memory_barriers;

    for( auto & buffer_transition : buffer_transitions ) {
      buffer_memory_barriers.push_back( {
        VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER,    // VkStructureType    sType
        nullptr,                                    // const void       * pNext
        buffer_transition.CurrentAccess,            // VkAccessFlags      srcAccessMask
        buffer_transition.NewAccess,                // VkAccessFlags      dstAccessMask
        buffer_transition.CurrentQueueFamily,       // uint32_t           srcQueueFamilyIndex
        buffer_transition.NewQueueFamily,           // uint32_t           dstQueueFamilyIndex
        buffer_transition.Buffer,                   // VkBuffer           buffer
        0,                                          // VkDeviceSize       offset
        VK_WHOLE_SIZE                               // VkDeviceSize       size
      } );
    }

    if( buffer_memory_barriers.size() > 0 ) {
      vkCmdPipelineBarrier( command_buffer, generating_stages, consuming_stages, 0, 0, nullptr, static_cast<uint32_t>(buffer_memory_barriers.size()), buffer_memory_barriers.data(), 0, nullptr );
    }
  }

} // namespace VulkanLibrary
