#include "LoadingFunctions.h"
namespace VulkanLibrary
{
	bool LoadFunctionExportedFromVulkanLoaderLibrary(LIBRARY_TYPE const& vulkanLibrary)
	{
		#if defined _WIN32
		#define LoadFunction GetProcAddress
		#elif defined _linux
		#define LoadFunction dlsym
		#endif

		#define EXPORTED_VULKAN_FUNCTION(name)															\
			name = (PFN_##name)LoadFunction(vulkanLibrary, #name);										\
			if (name == nullptr)																		\
			{																							\
				std::cout << "Could not load exported Vulkan function named: " << #name << std::endl;	\
				return false;																			\
			}																							
		#include "ListOfVulkanFunctions.inl"
		return true;
	}

	bool LoadGlobalLevelFunctions()
	{
		#define GLOBAL_LEVEL_VULKAN_FUNCTION(name)															\
			name = (PFN_##name)vkGetInstanceProcAddr(nullptr, #name);										\
			if (name == nullptr)																			\
			{																								\
				std::cout << "Could not load global Level Vulkan function named: " << #name << std::endl;	\
				return false;																				\
			}
		#include "ListOfVulkanFunctions.inl"
		return true;
	}
	bool LoadInstanceLevelFunctions(VkInstance instance, std::vector<char const*> const& enabled_extensions)
	{
		//Macro 1
	#define INSTANCE_LEVEL_VULKAN_FUNCTION(name)															\
		name = (PFN_##name)vkGetInstanceProcAddr(instance, #name);											\
		if (name == nullptr) {																				\
			std::cout << "Could not load instance-level Vulkan function named: " << #name << std::endl;		\
			return false;																					\
		}

	#define INSTANCE_LEVEL_VULKAN_FUNCTION_FROM_EXTENSION(name, extension)										\
		for (auto& enabled_extension : enabled_extensions) {													\
			if (std::string(enabled_extension) == std::string(extension)) {										\
				name = (PFN_##name)vkGetInstanceProcAddr(instance, #name);										\
				if (name == nullptr) {																			\
					std::cout << "Could not load instance-level Vulkan function named: " << #name << std::endl;	\
					return false;																				\
				}																								\
			}																									\
		}
	#include "ListOfVulkanFunctions.inl"

		return true;
	}
	bool LoadDeviceLevelFunctions(VkDevice device, std::vector<char const*> const& enabled_extensions)
	{
		//Macro 1
#define DEVICE_LEVEL_VULKAN_FUNCTION(name)																	\
		name = (PFN_##name)vkGetDeviceProcAddr(device, #name);												\
		if (name == nullptr) {																				\
			std::cout << "Could not load device-level Vulkan function named: " << #name << std::endl;		\
			return false;																					\
		}
		
#define DEVICE_LEVEL_VULKAN_FUNCTION_FROM_EXTENSION(name, extension)											\
		for (auto& enabled_extension : enabled_extensions) {													\
			if (std::string(enabled_extension) == std::string(extension)) {										\
				name = (PFN_##name)vkGetDeviceProcAddr(device, #name);											\
				if (name == nullptr) {																			\
					std::cout << "Could not load device-level Vulkan function named: " << #name << std::endl;	\
					return false;																				\
				}																								\
			}																									\
		}
#include "ListOfVulkanFunctions.inl"

		return true;
	}
}


