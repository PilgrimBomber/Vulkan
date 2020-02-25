

#include "03 Specifying dependencies between subpasses.h"

namespace VulkanLibrary {

  void SpecifyDependenciesBetweenSubpasses( std::vector<VkSubpassDependency> const & subpasses_dependencies ) {
    // typedef struct VkSubpassDependency {
    //   uint32_t                srcSubpass;
    //   uint32_t                dstSubpass;
    //   VkPipelineStageFlags    srcStageMask;
    //   VkPipelineStageFlags    dstStageMask;
    //   VkAccessFlags           srcAccessMask;
    //   VkAccessFlags           dstAccessMask;
    //   VkDependencyFlags       dependencyFlags;
    // } VkSubpassDependency;
  }

} // namespace VulkanLibrary
