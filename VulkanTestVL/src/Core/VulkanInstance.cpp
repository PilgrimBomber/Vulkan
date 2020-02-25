#include "VulkanInstance.h"


namespace VulkanLibrary
{
	bool CreateVulkanInstance(std::vector<char const*> const& desiredExtensions, char const* const applicationName, VkInstance& instance)
	{
		std::vector<VkExtensionProperties> available_extensions;
		if (!CheckAvailableInstanceExtensions(available_extensions))
		{
			return false;
		}
		std::cout << "Checking if desired extensions exist:" << std::endl;
		for (auto& extension : desiredExtensions)
		{
			if (!CheckExtensionExisting(available_extensions, extension))
			{
				std::cout << "Extension named '" << extension << "' is not supported by an Instance object." << std::endl;
				return false;
			}
		}
		VkApplicationInfo applicationInfo =
		{
			VK_STRUCTURE_TYPE_APPLICATION_INFO,
			nullptr,
			applicationName,
			VK_MAKE_VERSION(1,0,0),
			"CP_example_app",
			VK_MAKE_VERSION(1,0,0),
			VK_MAKE_VERSION(1,0,0)
		};

		VkInstanceCreateInfo instanceCreateInfo =
		{
			VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
			nullptr,
			0,
			&applicationInfo,
			0,
			nullptr,
			static_cast<uint32_t>(desiredExtensions.size()),
			desiredExtensions.data()
		};

		VkResult result = vkCreateInstance(&instanceCreateInfo, nullptr, &instance);
		if ((result != VK_SUCCESS) || instance == VK_NULL_HANDLE)
		{
			std::cout << "Could not create Vulkan instance." << std::endl;
			return false;
		}

		return true;
	}
}

