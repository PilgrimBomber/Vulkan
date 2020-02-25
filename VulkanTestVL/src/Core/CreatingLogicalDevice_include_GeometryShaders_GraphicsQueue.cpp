#include "CreatingLogicalDevice_include_GeometryShaders_GraphicsQueue.h"
#include "EnumeratePhysicalDevices.h"
#include "GetPropsPhysDevice.h"
#include "CreateLogicalDevices.h"
#include "LoadingFunctions.h"
#include "GetDeviceQueue.h"



namespace VulkanLibrary {

  bool CreateLogicalDeviceWithGeometryShadersAndGraphicsAndComputeQueues( VkInstance   instance,
                                                                          VkDevice   & logical_device,
                                                                          VkQueue    & graphics_queue,
                                                                          VkQueue    & compute_queue ) {
    std::vector<VkPhysicalDevice> physical_devices;
    EnumerateAvailablePhysicalDevices( instance, physical_devices );

    for( auto & physical_device : physical_devices ) {
      VkPhysicalDeviceFeatures device_features;
      VkPhysicalDeviceProperties device_properties;
      GetFeaturesAndPropertiesOfPhysicalDevice( physical_device, device_features, device_properties );

      if( !device_features.geometryShader ) {
        continue;
      } else {
        device_features = {};
        device_features.geometryShader = VK_TRUE;
      }

      uint32_t graphics_queue_family_index;
      if( !SelectIndexOfQueueFamilyWithDesiredCapabilities( physical_device, VK_QUEUE_GRAPHICS_BIT, graphics_queue_family_index ) ) {
        continue;
      }

      uint32_t compute_queue_family_index;
      if( !SelectIndexOfQueueFamilyWithDesiredCapabilities( physical_device, VK_QUEUE_COMPUTE_BIT, compute_queue_family_index ) ) {
        continue;
      }

      std::vector<QueueInfo> requested_queues = { { graphics_queue_family_index, { 1.0f } } };
      if( graphics_queue_family_index != compute_queue_family_index ) {
        requested_queues.push_back( { compute_queue_family_index, { 1.0f } } );
      }

      if( !CreateLogicalDevice( physical_device, requested_queues, {}, &device_features, logical_device ) ) {
        continue;
      } else {
        if( !LoadDeviceLevelFunctions( logical_device, {} ) ) {
          return false;
        }
        GetDeviceQueue( logical_device, graphics_queue_family_index, 0, graphics_queue );
        GetDeviceQueue( logical_device, compute_queue_family_index, 0, compute_queue );
        return true;
      }
    }
    return false;
  }

} // namespace VulkanLibrary
