#include "05 Selecting a desired presentation mode.h"
#include "06 Getting capabilities of a presentation surface.h"
#include "07 Selecting a number of swapchain images.h"
#include "08 Choosing a size of swapchain images.h"
#include "09 Selecting desired usage scenarios of swapchain images.h"
#include "10 Selecting a transformation of swapchain images.h"
#include "11 Selecting a format of swapchain images.h"
#include "12 Creating a swapchain.h"
#include "13 Getting handles of swapchain images.h"
#include "14 Creating a swapchain with R8G8B8A8 format and a MAILBOX present mode.h"

namespace VulkanLibrary {

  bool CreateSwapchainWithR8G8B8A8FormatAndMailboxPresentMode( VkPhysicalDevice       physical_device,
                                                               VkSurfaceKHR           presentation_surface,
                                                               VkDevice               logical_device,
                                                               VkImageUsageFlags      swapchain_image_usage,
                                                               VkExtent2D           & image_size,
                                                               VkFormat             & image_format,
                                                               VkSwapchainKHR       & old_swapchain,
                                                               VkSwapchainKHR       & swapchain,
                                                               std::vector<VkImage> & swapchain_images ) {
    VkPresentModeKHR desired_present_mode;
    if( !SelectDesiredPresentationMode( physical_device, presentation_surface, VK_PRESENT_MODE_MAILBOX_KHR, desired_present_mode ) ) {
      return false;
    }

    VkSurfaceCapabilitiesKHR surface_capabilities;
    if( !GetCapabilitiesOfPresentationSurface( physical_device, presentation_surface, surface_capabilities ) ) {
      return false;
    }

    uint32_t number_of_images;
    if( !SelectNumberOfSwapchainImages( surface_capabilities, number_of_images ) ) {
      return false;
    }

    if( !ChooseSizeOfSwapchainImages( surface_capabilities, image_size ) ) {
      return false;
    }
    if( (0 == image_size.width) ||
        (0 == image_size.height) ) {
      return true;
    }

    VkImageUsageFlags image_usage;
    if( !SelectDesiredUsageScenariosOfSwapchainImages( surface_capabilities, swapchain_image_usage, image_usage ) ) {
      return false;
    }

    VkSurfaceTransformFlagBitsKHR surface_transform;
    SelectTransformationOfSwapchainImages( surface_capabilities, VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR, surface_transform );

    VkColorSpaceKHR image_color_space;
    if( !SelectFormatOfSwapchainImages( physical_device, presentation_surface, { VK_FORMAT_R8G8B8A8_UNORM, VK_COLOR_SPACE_SRGB_NONLINEAR_KHR }, image_format, image_color_space ) ) {
      return false;
    }

    if( !CreateSwapchain( logical_device, presentation_surface, number_of_images, { image_format, image_color_space }, image_size, image_usage, surface_transform, desired_present_mode, old_swapchain, swapchain ) ) {
      return false;
    }

    if( !GetHandlesOfSwapchainImages( logical_device, swapchain, swapchain_images ) ) {
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
