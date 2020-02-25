#pragma once
#include "common.h"
#include "VulkanFunctions.h"

namespace VulkanLibrary
{
	//bool CheckAvailableDeviceExtensions(std::vector<VkPhysicalDevice> physicalDevices ,std::vector<VkExtensionProperties>& availableExtensions);
	bool CheckAvailableDeviceExtensions(VkPhysicalDevice physicalDevice, std::vector<VkExtensionProperties>& availableExtensions);
	bool CheckDeviceExtensionExisting(const std::vector<VkExtensionProperties>& available_extensions, const char* extension);
}