#include "EnumeratePhysicalDevices.h"

namespace VulkanLibrary
{
	bool EnumerateAvailablePhysicalDevices(VkInstance instance, std::vector<VkPhysicalDevice>& available_devices)
	{
		uint32_t devices_count = 0;
		VkResult result = VK_SUCCESS;

		result = vkEnumeratePhysicalDevices(instance, &devices_count, nullptr);
		if ((result != VK_SUCCESS) || (devices_count == 0))
		{
			std::cout << "Could not get the number of available physical devices." << std::endl;
			return false;
		}
		available_devices.resize(devices_count);
		result = vkEnumeratePhysicalDevices(instance, &devices_count, available_devices.data());
		if ((result != VK_SUCCESS) || (devices_count == 0))
		{
			std::cout << "Could not enumerate physical devices." << std::endl;
			return false;
		}

		return true;
	}
}


