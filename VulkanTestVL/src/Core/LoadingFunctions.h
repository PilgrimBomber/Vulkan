#ifndef LOADING_FUNCION_EXPORTED_FROM_A_VULKAN_LOADER_LIBRARY
#define LOADING_FUNCION_EXPORTED_FROM_A_VULKAN_LOADER_LIBRARY

#include "common.h"
#include "VulkanFunctions.h"

namespace VulkanLibrary
{
	bool LoadFunctionExportedFromVulkanLoaderLibrary(LIBRARY_TYPE const& vulkanLibrary);
	bool LoadGlobalLevelFunctions();
	bool LoadInstanceLevelFunctions(VkInstance instance, std::vector<char const*> const& enabled_extensions);
	bool LoadDeviceLevelFunctions(VkDevice device, std::vector<char const*> const& enabled_extensions);
}

#endif // !LOADING_FUNCION_EXPORTED_FROM_A_VULKAN_LOADER_LIBRARY