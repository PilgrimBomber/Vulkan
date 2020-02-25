
#ifndef CREATING_A_SAMPLER
#define CREATING_A_SAMPLER

#include "common.h"

namespace VulkanLibrary {

  bool CreateSampler( VkDevice               logical_device,
                      VkFilter               mag_filter,
                      VkFilter               min_filter,
                      VkSamplerMipmapMode    mipmap_mode,
                      VkSamplerAddressMode   u_address_mode,
                      VkSamplerAddressMode   v_address_mode,
                      VkSamplerAddressMode   w_address_mode,
                      float                  lod_bias,
                      bool                   anisotropy_enable,
                      float                  max_anisotropy,
                      bool                   compare_enable,
                      VkCompareOp            compare_operator,
                      float                  min_lod,
                      float                  max_lod,
                      VkBorderColor          border_color,
                      bool                   unnormalized_coords,
                      VkSampler            & sampler );

} // namespace VulkanLibrary

#endif // CREATING_A_SAMPLER