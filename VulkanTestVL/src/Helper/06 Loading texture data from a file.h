
#ifndef LOADING_TEXTURE_DATA_FROM_A_FILE
#define LOADING_TEXTURE_DATA_FROM_A_FILE

#include "Tools.h"

namespace VulkanLibrary {

  bool LoadTextureDataFromFile( char const                 * filename,
                                int                          num_requested_components,
                                std::vector<unsigned char> & image_data,
                                int                        * image_width = nullptr,
                                int                        * image_height = nullptr,
                                int                        * image_num_components = nullptr,
                                int                        * image_data_size = nullptr );

} // namespace VulkanLibrary

#endif // LOADING_TEXTURE_DATA_FROM_A_FILE