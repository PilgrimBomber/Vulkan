
#include "01 Specifying attachments descriptions.h"
#include "02 Specifying subpass descriptions.h"
#include "03 Specifying dependencies between subpasses.h"
#include "04 Creating a render pass.h"

namespace VulkanLibrary {

  bool CreateRenderPass( VkDevice                                     logical_device,
                         std::vector<VkAttachmentDescription> const & attachments_descriptions,
                         std::vector<SubpassParameters> const       & subpass_parameters,
                         std::vector<VkSubpassDependency> const     & subpass_dependencies,
                         VkRenderPass                               & render_pass ) {

    SpecifyAttachmentsDescriptions( attachments_descriptions );

    std::vector<VkSubpassDescription> subpass_descriptions;
    SpecifySubpassDescriptions( subpass_parameters, subpass_descriptions );

    SpecifyDependenciesBetweenSubpasses( subpass_dependencies );

    VkRenderPassCreateInfo render_pass_create_info = {
      VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO,                // VkStructureType                    sType
      nullptr,                                                  // const void                       * pNext
      0,                                                        // VkRenderPassCreateFlags            flags
      static_cast<uint32_t>(attachments_descriptions.size()),   // uint32_t                           attachmentCount
      attachments_descriptions.data(),                          // const VkAttachmentDescription    * pAttachments
      static_cast<uint32_t>(subpass_descriptions.size()),       // uint32_t                           subpassCount
      subpass_descriptions.data(),                              // const VkSubpassDescription       * pSubpasses
      static_cast<uint32_t>(subpass_dependencies.size()),       // uint32_t                           dependencyCount
      subpass_dependencies.data()                               // const VkSubpassDependency        * pDependencies
    };

    VkResult result = vkCreateRenderPass( logical_device, &render_pass_create_info, nullptr, &render_pass );
    if( VK_SUCCESS != result ) {
      std::cout << "Could not create a render pass." << std::endl;
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
