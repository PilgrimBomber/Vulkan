

#ifndef SPECIFYING_DEPENDENCIES_BETWEEN_SUBPASSES
#define SPECIFYING_DEPENDENCIES_BETWEEN_SUBPASSES

#include "common.h"

namespace VulkanLibrary {

  void SpecifyDependenciesBetweenSubpasses( std::vector<VkSubpassDependency> const & subpasses_dependencies );

} // namespace VulkanLibrary

#endif // SPECIFYING_DEPENDENCIES_BETWEEN_SUBPASSES