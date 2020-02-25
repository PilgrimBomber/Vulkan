#pragma once
#include "common.h"
#include "VulkanFunctions.h"

namespace VulkanLibrary
{
	bool CheckAvailableInstanceExtensions(std::vector<VkExtensionProperties>& available_extensions);

	bool CheckExtensionExisting(const std::vector<VkExtensionProperties>& available_extensions, const char* extension);
}
