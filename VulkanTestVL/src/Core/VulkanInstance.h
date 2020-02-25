#pragma once
#include "common.h"
#include "VulkanFunctions.h"
#include "CheckForExtensions.h"

namespace VulkanLibrary
{
	bool CreateVulkanInstance(std::vector<char const*> const& desired_extensions, char const* const application_name, VkInstance& instance);
}


