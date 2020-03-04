
#include "SampleFramework.h"

#include "ReleasingVulkanLoaderLibrary.h"
#include "LoadingFunctions.h"
#include "EnumeratePhysicalDevices.h"
#include "GetPropsPhysDevice.h"
#include "DestroyLogicalDevice.h"
#include "DestroyVulkanInstance.h"
#include "ReleasingVulkanLoaderLibrary.h"
#include "DllLoader.h"
#include "GetDeviceQueue.h"

#include "01 Creating a Vulkan Instance with WSI extensions enabled.h"
#include "02 Creating a presentation surface.h"
#include "03 Selecting a queue family that supports presentation to a given surface.h"
#include "04 Creating a logical device with WSI extensions enabled.h"
#include "14 Creating a swapchain with R8G8B8A8 format and a MAILBOX present mode.h"
#include "17 Destroying a swapchain.h"
#include "18 Destroying a presentation surface.h"
#include "01 Creating a command pool.h"
#include "02 Allocating command buffers.h"
#include "07 Creating a semaphore.h"
#include "08 Creating a fence.h"
#include "17 Destroying a semaphore.h"
#include "15 Waiting for all submitted commands to be finished.h"
#include "08 Creating an image view.h"
#include "09 Creating a 2D image and view.h"
#include "17 Destroying an image view.h"




namespace VulkanLibrary {

  MouseState::MouseState() {
    Buttons[0].IsPressed = false;
    Buttons[0].WasClicked = false;
    Buttons[0].WasRelease = false;
    Buttons[1].IsPressed = false;
    Buttons[1].WasClicked = false;
    Buttons[1].WasRelease = false;
    Position.X = 0;
    Position.Y = 0;
    Position.Delta.X = 0;
    Position.Delta.Y = 0;
    Wheel.WasMoved = false;
    Wheel.Distance = 0.0f;
  }

  MouseState::~MouseState() {
  }

  float TimerState::GetTime() const {
    auto duration = Time.time_since_epoch();
    auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
    return static_cast<float>(milliseconds * 0.001f);
  }

  float TimerState::GetDeltaTime() const {
    return DeltaTime.count();
  }

  void TimerState::Update() {
    auto previous_time = Time;
    Time = std::chrono::high_resolution_clock::now();
    DeltaTime = std::chrono::high_resolution_clock::now() - previous_time;
  }

  TimerState::TimerState() {
    Update();
  }

  TimerState::~TimerState() {
  }

  ShaderExampleBase::ShaderExampleBase() :
    VulkanLibrary( nullptr ),
    Ready( false ) {
  }

  ShaderExampleBase::~ShaderExampleBase() {
    ReleaseVulkanLoaderLibrary( VulkanLibrary );
  }

  void ShaderExampleBase::MouseClick( size_t button_index, bool state ) {
    if( 2 > button_index ) {
      MouseState.Buttons[button_index].IsPressed = state;
      MouseState.Buttons[button_index].WasClicked = state;
      MouseState.Buttons[button_index].WasRelease = !state;
      OnMouseEvent();
    }
  }

  void ShaderExampleBase::MouseMove( int x, int y ) {
    MouseState.Position.Delta.X = x - MouseState.Position.X;
    MouseState.Position.Delta.Y = y - MouseState.Position.Y;
    MouseState.Position.X = x;
    MouseState.Position.Y = y;

    OnMouseEvent();
  }

  void ShaderExampleBase::MouseWheel( float distance ) {
    MouseState.Wheel.WasMoved = true;
    MouseState.Wheel.Distance = distance;
    OnMouseEvent();
  }

  void ShaderExampleBase::MouseReset() {
    MouseState.Position.Delta.X = 0;
    MouseState.Position.Delta.Y = 0;
    MouseState.Buttons[0].WasClicked = false;
    MouseState.Buttons[0].WasRelease = false;
    MouseState.Buttons[1].WasClicked = false;
    MouseState.Buttons[1].WasRelease = false;
    MouseState.Wheel.WasMoved = false;
    MouseState.Wheel.Distance = 0.0f;
  }

  void ShaderExampleBase::UpdateTime() {
    TimerState.Update();
  }

  bool ShaderExampleBase::IsReady() {
    return Ready;
  }

  void ShaderExampleBase::OnMouseEvent() {
    // Override this in a derived class to know when a mouse event occured
  }

  void ShaderExample::OnMouseEvent()
  {
      if (MouseState.Buttons[0].IsPressed);
  }
  
  bool ShaderExample::InitializeVulkan( WindowParameters           window_parameters,
                                               VkPhysicalDeviceFeatures * desired_device_features,
                                               VkImageUsageFlags          swapchain_image_usage,
                                               bool                       use_depth,
                                               VkImageUsageFlags          depth_attachment_usage ) {
      DllLoader vulkanLoader;
      vulkanLoader.LoadVulkanDll();
      VulkanLibrary = vulkanLoader.GetLibrary();
    if( !LoadFunctionExportedFromVulkanLoaderLibrary( VulkanLibrary ) ) {
      return false;
    }

    if( !LoadGlobalLevelFunctions() ) {
      return false;
    }

    std::vector<char const *> instance_extensions;
    if( !CreateVulkanInstanceWithWsiExtensionsEnabled( instance_extensions, "Vulkan Cookbook", *Instance ) ) {
      return false;
    }

    if( !LoadInstanceLevelFunctions( *Instance, instance_extensions ) ) {
      return false;
    }

    PresentationSurface = VkDestroyer<VkSurfaceKHR>( *Instance );
    if( !CreatePresentationSurface( *Instance, window_parameters, *PresentationSurface ) ) {
      return false;
    }

    std::vector<VkPhysicalDevice> physical_devices;
    EnumerateAvailablePhysicalDevices( *Instance, physical_devices );

    for( auto & physical_device : physical_devices ) {
      if( !SelectIndexOfQueueFamilyWithDesiredCapabilities( physical_device, VK_QUEUE_GRAPHICS_BIT, GraphicsQueue.FamilyIndex ) ) {
        continue;
      }

      if( !SelectIndexOfQueueFamilyWithDesiredCapabilities( physical_device, VK_QUEUE_COMPUTE_BIT, ComputeQueue.FamilyIndex ) ) {
        continue;
      }

      if( !SelectQueueFamilyThatSupportsPresentationToGivenSurface( physical_device, *PresentationSurface, PresentQueue.FamilyIndex ) ) {
        continue;
      }

      std::vector<QueueInfo> requested_queues = { { GraphicsQueue.FamilyIndex, { 1.0f } } };
      if( GraphicsQueue.FamilyIndex != ComputeQueue.FamilyIndex ) {
        requested_queues.push_back( { ComputeQueue.FamilyIndex,{ 1.0f } } );
      }
      if( (GraphicsQueue.FamilyIndex != PresentQueue.FamilyIndex) &&
          (ComputeQueue.FamilyIndex != PresentQueue.FamilyIndex) ) {
        requested_queues.push_back( { PresentQueue.FamilyIndex, { 1.0f } } );
      }
      std::vector<char const *> device_extensions;
      if( !CreateLogicalDeviceWithWsiExtensionsEnabled( physical_device, requested_queues, device_extensions, desired_device_features, *LogicalDevice ) ) {
        continue;
      } else {
        PhysicalDevice = physical_device;
        LoadDeviceLevelFunctions( *LogicalDevice, device_extensions );
        GetDeviceQueue( *LogicalDevice, GraphicsQueue.FamilyIndex, 0, GraphicsQueue.Handle );
        GetDeviceQueue( *LogicalDevice, GraphicsQueue.FamilyIndex, 0, ComputeQueue.Handle );
        GetDeviceQueue( *LogicalDevice, PresentQueue.FamilyIndex, 0, PresentQueue.Handle );
        break;
      }
    }

    if( !LogicalDevice ) {
      return false;
    }

    // Prepare frame resources

    InitVkDestroyer( *LogicalDevice, CommandPool );
    if( !CreateCommandPool( *LogicalDevice, VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT, GraphicsQueue.FamilyIndex, *CommandPool ) ) {
      return false;
    }

    for( uint32_t i = 0; i < FramesCount; ++i ) {
      std::vector<VkCommandBuffer> command_buffer;
      VkDestroyer<VkSemaphore> image_acquired_semaphore( LogicalDevice );
      VkDestroyer<VkSemaphore> ready_to_present_semaphore( LogicalDevice );
      VkDestroyer<VkFence> drawing_finished_fence( LogicalDevice );
      VkDestroyer<VkImageView> depth_attachment( LogicalDevice );

      if( !AllocateCommandBuffers( *LogicalDevice, *CommandPool, VK_COMMAND_BUFFER_LEVEL_PRIMARY, 1, command_buffer ) ) {
        return false;
      }
      if( !CreateSemaphore( *LogicalDevice, *image_acquired_semaphore ) ) {
        return false;
      }
      if( !CreateSemaphore( *LogicalDevice, *ready_to_present_semaphore ) ) {
        return false;
      }
      if( !CreateFence( *LogicalDevice, true, *drawing_finished_fence ) ) {
        return false;
      }

      FrameResources.push_back( {
        command_buffer[0],
        std::move( image_acquired_semaphore ),
        std::move( ready_to_present_semaphore ),
        std::move( drawing_finished_fence ),
        std::move( depth_attachment ),
        {}
      } );
    }

    if( !CreateSwapchain( swapchain_image_usage, use_depth, depth_attachment_usage ) ) {
      return false;
    }

    return true;
  }

  bool ShaderExample::CreateSwapchain( VkImageUsageFlags swapchain_image_usage,
                                              bool              use_depth,
                                              VkImageUsageFlags depth_attachment_usage ) {
    WaitForAllSubmittedCommandsToBeFinished( *LogicalDevice );

    Ready = false;

    Swapchain.ImageViewsRaw.clear();
    Swapchain.ImageViews.clear();
    Swapchain.Images.clear();

    VkDestroyer<VkSwapchainKHR> old_swapchain = std::move( Swapchain.Handle );
    Swapchain.Handle = VkDestroyer<VkSwapchainKHR>( *LogicalDevice );
    if( !CreateSwapchainWithR8G8B8A8FormatAndMailboxPresentMode( PhysicalDevice, *PresentationSurface, *LogicalDevice, swapchain_image_usage, Swapchain.Size, Swapchain.Format, *old_swapchain, *Swapchain.Handle, Swapchain.Images ) ) {
      return false;
    }
    if( !Swapchain.Handle ) {
      return true;
    }

    for( size_t i = 0; i < Swapchain.Images.size(); ++i ) {
      Swapchain.ImageViews.emplace_back( LogicalDevice );
      if( !CreateImageView( *LogicalDevice, Swapchain.Images[i], VK_IMAGE_VIEW_TYPE_2D, Swapchain.Format, VK_IMAGE_ASPECT_COLOR_BIT, *Swapchain.ImageViews.back() ) ) {
        return false;
      }
      Swapchain.ImageViewsRaw.push_back( *Swapchain.ImageViews.back() );
    }

    // When we want to use depth buffering, we need to use a depth attachment
    // It must have the same size as the swapchain, so we need to recreate it along with the swapchain
    DepthImages.clear();
    DepthImagesMemory.clear();

    if( use_depth ) {
      for( uint32_t i = 0; i < FramesCount; ++i ) {
        DepthImages.emplace_back( LogicalDevice );
        DepthImagesMemory.emplace_back( LogicalDevice );
        InitVkDestroyer( LogicalDevice, FrameResources[i].DepthAttachment );

        if( !Create2DImageAndView( PhysicalDevice, *LogicalDevice, DepthFormat, Swapchain.Size, 1, 1, VK_SAMPLE_COUNT_1_BIT,
          VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT, VK_IMAGE_ASPECT_DEPTH_BIT, *DepthImages.back(), *DepthImagesMemory.back(),
          *FrameResources[i].DepthAttachment ) ) {
          return false;
        }
      }
    }

    Ready = true;
    return true;
  }

  void ShaderExample::Deinitialize() {
    if( LogicalDevice ) {
      WaitForAllSubmittedCommandsToBeFinished( *LogicalDevice );
    }
  }

} // namespace VulkanLibrary
