
#ifndef UPDATING_DESCRIPTOR_SETS
#define UPDATING_DESCRIPTOR_SETS

#include "common.h"

namespace VulkanLibrary {

  struct ImageDescriptorInfo {
    VkDescriptorSet                     TargetDescriptorSet;
    uint32_t                            TargetDescriptorBinding;
    uint32_t                            TargetArrayElement;
    VkDescriptorType                    TargetDescriptorType;
    std::vector<VkDescriptorImageInfo>  ImageInfos;
  };

  struct BufferDescriptorInfo {
    VkDescriptorSet                     TargetDescriptorSet;
    uint32_t                            TargetDescriptorBinding;
    uint32_t                            TargetArrayElement;
    VkDescriptorType                    TargetDescriptorType;
    std::vector<VkDescriptorBufferInfo> BufferInfos;
  };

  struct TexelBufferDescriptorInfo {
    VkDescriptorSet                     TargetDescriptorSet;
    uint32_t                            TargetDescriptorBinding;
    uint32_t                            TargetArrayElement;
    VkDescriptorType                    TargetDescriptorType;
    std::vector<VkBufferView>           TexelBufferViews;
  };

  struct CopyDescriptorInfo {
    VkDescriptorSet     TargetDescriptorSet;
    uint32_t            TargetDescriptorBinding;
    uint32_t            TargetArrayElement;
    VkDescriptorSet     SourceDescriptorSet;
    uint32_t            SourceDescriptorBinding;
    uint32_t            SourceArrayElement;
    uint32_t            DescriptorCount;
  };

  void UpdateDescriptorSets( VkDevice                                       logical_device,
                             std::vector<ImageDescriptorInfo> const       & image_descriptor_infos,
                             std::vector<BufferDescriptorInfo> const      & buffer_descriptor_infos,
                             std::vector<TexelBufferDescriptorInfo> const & texel_buffer_descriptor_infos,
                             std::vector<CopyDescriptorInfo> const        & copy_descriptor_infos );

} // namespace VulkanLibrary

#endif // UPDATING_DESCRIPTOR_SETS