#include "15 Acquiring a swapchain image.h"
#include "16 Presenting an image.h"
#include "05 Creating a framebuffer.h"
#include "18 Preparing a single frame of animation.h"

namespace VulkanLibrary {

  bool PrepareSingleFrameOfAnimation( VkDevice                                                        logical_device,
                                      VkQueue                                                         graphics_queue,
                                      VkQueue                                                         present_queue,
                                      VkSwapchainKHR                                                  swapchain,
                                      VkExtent2D                                                      swapchain_size,
                                      std::vector<VkImageView> const                                & swapchain_image_views,
                                      VkImageView                                                     depth_attachment,
                                      std::vector<WaitSemaphoreInfo> const                          & wait_infos,
                                      VkSemaphore                                                     image_acquired_semaphore,
                                      VkSemaphore                                                     ready_to_present_semaphore,
                                      VkFence                                                         finished_drawing_fence,
                                      std::function<bool(VkCommandBuffer, uint32_t, VkFramebuffer)>   record_command_buffer,
                                      VkCommandBuffer                                                 command_buffer,
                                      VkRenderPass                                                    render_pass,
                                      VkDestroyer<VkFramebuffer>                                    & framebuffer ) {
    uint32_t image_index;
    if( !AcquireSwapchainImage( logical_device, swapchain, image_acquired_semaphore, VK_NULL_HANDLE, image_index ) ) {
      return false;
    }

    std::vector<VkImageView> attachments = { swapchain_image_views[image_index] };
    if( VK_NULL_HANDLE != depth_attachment ) {
      attachments.push_back( depth_attachment );
    }
    if( !CreateFramebuffer( logical_device, render_pass, attachments, swapchain_size.width, swapchain_size.height, 1, *framebuffer ) ) {
      return false;
    }

    if( !record_command_buffer( command_buffer, image_index, *framebuffer ) ) {
      return false;
    }

    std::vector<WaitSemaphoreInfo> wait_semaphore_infos = wait_infos;
    wait_semaphore_infos.push_back( {
      image_acquired_semaphore,                     // VkSemaphore            Semaphore
      VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT // VkPipelineStageFlags   WaitingStage
    } );
    if( !SubmitCommandBuffersToQueue( graphics_queue, wait_semaphore_infos, { command_buffer }, { ready_to_present_semaphore }, finished_drawing_fence ) ) {
      return false;
    }

    PresentInfo present_info = {
      swapchain,                                    // VkSwapchainKHR         Swapchain
      image_index                                   // uint32_t               ImageIndex
    };
    if( !PresentImage( present_queue, { ready_to_present_semaphore }, { present_info } ) ) {
      return false;
    }
    return true;
  }

} // namespace VulkanLibrary
