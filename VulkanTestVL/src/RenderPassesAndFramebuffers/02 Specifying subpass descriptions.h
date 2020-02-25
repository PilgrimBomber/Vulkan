

#ifndef SPECIFYING_SUBPASS_DESCRIPTIONS
#define SPECIFYING_SUBPASS_DESCRIPTIONS

#include "common.h"

namespace VulkanLibrary {

  struct SubpassParameters {
    VkPipelineBindPoint                  PipelineType;
    std::vector<VkAttachmentReference>   InputAttachments;
    std::vector<VkAttachmentReference>   ColorAttachments;
    std::vector<VkAttachmentReference>   ResolveAttachments;
    VkAttachmentReference const        * DepthStencilAttachment;
    std::vector<uint32_t>                PreserveAttachments;
  };

  void SpecifySubpassDescriptions( std::vector<SubpassParameters> const & subpass_parameters,
                                   std::vector<VkSubpassDescription>    & subpass_descriptions );

} // namespace VulkanLibrary

#endif // SPECIFYING_SUBPASS_DESCRIPTIONS