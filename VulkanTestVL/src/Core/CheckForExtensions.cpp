#include "CheckForExtensions.h"
namespace VulkanLibrary 
{
	bool CheckAvailableInstanceExtensions(std::vector<VkExtensionProperties>& available_extensions)
	{
		uint32_t extensions_count = 0;
		VkResult result = VK_SUCCESS;

		result = vkEnumerateInstanceExtensionProperties(nullptr, &extensions_count, nullptr);
		if ((result != VK_SUCCESS) || extensions_count == 0)
		{
			std::cout << "Could not get the number of instance extensions." << std::endl;
			return false;
		}
		available_extensions.resize(extensions_count);
		result = vkEnumerateInstanceExtensionProperties(nullptr, &extensions_count, available_extensions.data());
		if ((result != VK_SUCCESS) || extensions_count == 0)
		{
			std::cout << "Could not enumerate instance extensions." << std::endl;
			return false;
		}

		return true;
	}


	bool CheckExtensionExisting(const std::vector<VkExtensionProperties>& available_extensions, const char* extension)
	{
		for (int i = 0; i < available_extensions.size(); i++)
		{
			if (strcmp(available_extensions[i].extensionName, extension)==0)
			{
				std::cout << "	Extension " << extension << " existing" << std::endl;
				return true;
			}
			
		}
		std::cout << "	No extension existing named " << extension << std::endl;
		return false;
	}
}
