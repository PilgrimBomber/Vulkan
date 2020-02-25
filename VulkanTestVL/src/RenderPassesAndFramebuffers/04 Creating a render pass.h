

#ifndef CREATING_A_RENDER_PASS
#define CREATING_A_RENDER_PASS

#include "common.h"
#include "02 Specifying subpass descriptions.h"

namespace VulkanLibrary {

  bool CreateRenderPass( VkDevice                                     logical_device,
                         std::vector<VkAttachmentDescription> const & attachments_descriptions,
                         std::vector<SubpassParameters> const       & subpass_parameters,
                         std::vector<VkSubpassDependency> const     & subpass_dependencies,
                         VkRenderPass                               & render_pass );

} // namespace VulkanLibrary

#endif // CREATING_A_RENDER_PASS