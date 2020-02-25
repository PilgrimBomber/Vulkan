#include "CheckForDeviceExtensions.h"

//bool VulkanLibrary::CheckAvailableDeviceExtensions(std::vector<VkPhysicalDevice> physicalDevices, std::vector<VkExtensionProperties>& availableExtensions)
//{
//	uint32_t extensions_count = 0;
//	VkResult result = VK_SUCCESS;
//	std::vector<VkExtensionProperties> newExtensions;
//	for (auto device : physicalDevices)
//	{
//		result = vkEnumerateDeviceExtensionProperties(device,nullptr,&extensions_count,nullptr);
//		if ((result != VK_SUCCESS) || extensions_count == 0)
//		{
//			std::cout << "Could not get the number of device extensions." << std::endl;
//			return false;
//		}
//		
//		newExtensions.resize(extensions_count);
//		result = vkEnumerateDeviceExtensionProperties(device, nullptr, &extensions_count, newExtensions.data());
//		if ((result != VK_SUCCESS) || extensions_count == 0)
//		{
//			std::cout << "Could not enumerate device extensions." << std::endl;
//			return false;
//		}
//		availableExtensions.insert(availableExtensions.end(), newExtensions.begin(), newExtensions.end());
//	}
//	
//
//	return true;
//}

bool VulkanLibrary::CheckAvailableDeviceExtensions(VkPhysicalDevice physicalDevice, std::vector<VkExtensionProperties>& availableExtensions)
{
	uint32_t extensions_count = 0;
	VkResult result = VK_SUCCESS;
	result = vkEnumerateDeviceExtensionProperties(physicalDevice, nullptr, &extensions_count, nullptr);
	if ((result != VK_SUCCESS) || extensions_count == 0)
	{
		std::cout << "Could not get the number of device extensions." << std::endl;
		return false;
	}

	availableExtensions.resize(extensions_count);
	result = vkEnumerateDeviceExtensionProperties(physicalDevice, nullptr, &extensions_count, availableExtensions.data());
	if ((result != VK_SUCCESS) || extensions_count == 0)
	{
		std::cout << "Could not enumerate device extensions." << std::endl;
		return false;
	}
	return true;
}

bool VulkanLibrary::CheckDeviceExtensionExisting(const std::vector<VkExtensionProperties>& available_extensions, const char* extension)
{
	for (int i = 0; i < available_extensions.size(); i++)
	{
		if (strcmp(available_extensions[i].extensionName, extension) == 0)
		{
			std::cout << "	Extension " << extension << " existing" << std::endl;
			return true;
		}

	}
	std::cout << "	No extension existing named " << extension << std::endl;
	return false;
}
