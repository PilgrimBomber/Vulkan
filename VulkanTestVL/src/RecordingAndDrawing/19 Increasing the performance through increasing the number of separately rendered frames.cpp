
#include "09 Waiting for fences.h"
#include "10 Resetting fences.h"
#include "11 Destroying a framebuffer.h"
#include "18 Preparing a single frame of animation.h"
#include "19 Increasing the performance through increasing the number of separately rendered frames.h"

namespace VulkanLibrary {

  bool IncreasePerformanceThroughIncreasingTheNumberOfSeparatelyRenderedFrames( VkDevice                                                        logical_device,
                                                                                VkQueue                                                         graphics_queue,
                                                                                VkQueue                                                         present_queue,
                                                                                VkSwapchainKHR                                                  swapchain,
                                                                                VkExtent2D                                                      swapchain_size,
                                                                                std::vector<VkImageView> const                                & swapchain_image_views,
                                                                                VkRenderPass                                                    render_pass,
                                                                                std::vector<WaitSemaphoreInfo> const                          & wait_infos,
                                                                                std::function<bool(VkCommandBuffer, uint32_t, VkFramebuffer)>   record_command_buffer,
                                                                                std::vector<FrameResources>                                   & frame_resources ) {
    static uint32_t frame_index = 0;
    FrameResources & current_frame = frame_resources[frame_index];

    if( !WaitForFences( logical_device, { *current_frame.DrawingFinishedFence }, false, 2000000000 ) ) {
      return false;
    }
    if( !ResetFences( logical_device, { *current_frame.DrawingFinishedFence } ) ) {
      return false;
    }

    InitVkDestroyer( logical_device, current_frame.Framebuffer );

    if( !PrepareSingleFrameOfAnimation( logical_device, graphics_queue, present_queue, swapchain, swapchain_size, swapchain_image_views,
      *current_frame.DepthAttachment, wait_infos, *current_frame.ImageAcquiredSemaphore, *current_frame.ReadyToPresentSemaphore,
      *current_frame.DrawingFinishedFence, record_command_buffer, current_frame.CommandBuffer, render_pass, current_frame.Framebuffer ) ) {
      return false;
    }

    frame_index = (frame_index + 1) % frame_resources.size();
    return true;
  }

} // namespace VulkanLibrary
