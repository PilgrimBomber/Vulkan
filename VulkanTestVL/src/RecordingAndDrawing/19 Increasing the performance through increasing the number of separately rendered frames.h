
#ifndef INCREASING_THE_PERFORMANCE_THROUGH_INCREASING_THE_NUMBER_OF_SEPARATELY_RENDERED_FRAMES
#define INCREASING_THE_PERFORMANCE_THROUGH_INCREASING_THE_NUMBER_OF_SEPARATELY_RENDERED_FRAMES

#include "11 Submitting command buffers to the queue.h"
#include "common.h"

namespace VulkanLibrary {

  struct FrameResources {
    VkCommandBuffer             CommandBuffer;
    VkDestroyer<VkSemaphore>    ImageAcquiredSemaphore;
    VkDestroyer<VkSemaphore>    ReadyToPresentSemaphore;
    VkDestroyer<VkFence>        DrawingFinishedFence;
    VkDestroyer<VkImageView>    DepthAttachment;
    VkDestroyer<VkFramebuffer>  Framebuffer;
  };

  bool IncreasePerformanceThroughIncreasingTheNumberOfSeparatelyRenderedFrames( VkDevice                                                        logical_device,
                                                                                VkQueue                                                         graphics_queue,
                                                                                VkQueue                                                         present_queue,
                                                                                VkSwapchainKHR                                                  swapchain,
                                                                                VkExtent2D                                                      swapchain_size,
                                                                                std::vector<VkImageView> const                                & swapchain_image_views,
                                                                                VkRenderPass                                                    render_pass,
                                                                                std::vector<WaitSemaphoreInfo> const                          & wait_infos,
                                                                                std::function<bool(VkCommandBuffer, uint32_t, VkFramebuffer)>   record_command_buffer,
                                                                                std::vector<FrameResources>                                   & frame_resources );

} // namespace VulkanLibrary

#endif // INCREASING_THE_PERFORMANCE_THROUGH_INCREASING_THE_NUMBER_OF_SEPARATELY_RENDERED_FRAMES