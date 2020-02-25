#ifndef ENUM_PHYS_DEVICES
#define ENUM_PHYS_DEVICES

#include "common.h"
#include "VulkanFunctions.h"
namespace VulkanLibrary
{
	bool EnumerateAvailablePhysicalDevices(VkInstance instance, std::vector<VkPhysicalDevice>& available_devices);

}
#endif