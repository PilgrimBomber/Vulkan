
#ifndef PREPARING_A_SINGLE_FRAME_OF_ANIMATION
#define PREPARING_A_SINGLE_FRAME_OF_ANIMATION

#include "11 Submitting command buffers to the queue.h"
#include "common.h"

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
                                      VkDestroyer<VkFramebuffer>                                    & framebuffer );

} // namespace VulkanLibrary

#endif // PREPARING_A_SINGLE_FRAME_OF_ANIMATION