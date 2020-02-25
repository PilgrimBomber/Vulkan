
#include "04 Binding vertex buffers.h"

namespace VulkanLibrary {

  void BindVertexBuffers( VkCommandBuffer                             command_buffer,
                          uint32_t                                    first_binding,
                          std::vector<VertexBufferParameters> const & buffers_parameters ) {
    if( buffers_parameters.size() > 0 ) {
      std::vector<VkBuffer>     buffers;
      std::vector<VkDeviceSize> offsets;
      for( auto & buffer_parameters : buffers_parameters ) {
        buffers.push_back( buffer_parameters.Buffer );
        offsets.push_back( buffer_parameters.MemoryOffset );
      }
      vkCmdBindVertexBuffers( command_buffer, first_binding, static_cast<uint32_t>(buffers_parameters.size()), buffers.data(), offsets.data() );
    }
  }

} // namespace VulkanLibrary
