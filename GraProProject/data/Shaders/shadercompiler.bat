for %%i in (*.frag, *.vert, *.geom) do %VULKAN_SDK%/Bin/glslangValidator.exe -V %%i -o %%i.spv
@pause