#include "common.h"
#include "DllLoader.h"
#include "LoadingFunctions.h"
#include "CheckForExtensions.h"
#include "VulkanInstance.h"
#include "EnumeratePhysicalDevices.h"
#include "CheckForDeviceExtensions.h"
#include "CreateLogicalDevices.h"
#include "GetPropsPhysDevice.h"
#include "CreatingLogicalDevice_include_GeometryShaders_GraphicsQueue.h"

int main()
{
	DllLoader loader;
	loader.LoadVulkanDll();
	if (VulkanLibrary::LoadFunctionExportedFromVulkanLoaderLibrary(loader.GetLibrary())) std::cout << "Successfully loaded load function from exported vulkan loader library." << std::endl;
	else std::cout << "Failed to load load function from vulkan loader library." << std::endl;
	
	if (VulkanLibrary::LoadGlobalLevelFunctions()) std::cout << "Successfully loaded global level functions." << std::endl;
	else std::cout << "Failed to load global level functions." << std::endl;
	
	VkInstance instance;
	std::vector<const char*> desiredExtensions;
	desiredExtensions.push_back("VK_EXT_swapchain_colorspace");
	desiredExtensions.push_back("VK_KHR_surface");
	if (VulkanLibrary::CreateVulkanInstance(desiredExtensions, "Instance1", instance)) std::cout << "Successfully created Vulkan Instance." << std::endl;
	else std::cout << "Failed to create Vulkan Instance." << std::endl;
	
	if (VulkanLibrary::LoadInstanceLevelFunctions(instance, desiredExtensions)) std::cout << "Successfully loaded instance-level functions" << std::endl;
	else std::cout << "Failed to load instance-level functions" << std::endl;

	std::vector<VkPhysicalDevice> physicalDevices;
	
	if (VulkanLibrary::EnumerateAvailablePhysicalDevices(instance, physicalDevices)) std::cout << "Succesfully enumerated physical devices." << std::endl;
	else std::cout << "Failed to enumerate physical devices." << std::endl;
	std::cout << std::endl << physicalDevices.size() << " Devices found." << std::endl;


	std::vector<const char*> desiredDeviceExtensions;

	std::vector<VkExtensionProperties> deviceExtensions;
	//if (VulkanLibrary::CheckAvailableDeviceExtensions(physicalDevices, deviceExtensions));
	VulkanLibrary::CheckAvailableDeviceExtensions(physicalDevices[0], deviceExtensions);
	std::cout << "Found "<< deviceExtensions.size() << " device extensions:" << std::endl;
	for (auto extension : deviceExtensions)
	{
		std::cout  << extension.extensionName << ", ";
	}
	std::cout << std::endl << std::endl;

	VkDevice device;
	VkQueue graphicsQueue;
	VkQueue computeQueue;
	
	if (VulkanLibrary::CreateLogicalDeviceWithGeometryShadersAndGraphicsAndComputeQueues(instance, device, graphicsQueue, computeQueue))std::cout << "Successfully created logical device." << std::endl;
	else std:cout << "Failed to create logical device." << std::endl;
	if (VulkanLibrary::LoadDeviceLevelFunctions(device, desiredDeviceExtensions)) std::cout << "Successfully loaded device-level functions." << std::endl;
	else std::cout << "Failed to load device-level functions." << std::endl;

}