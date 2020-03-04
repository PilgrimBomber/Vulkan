for %%i in (*.frag, *.vert, *.geom, *.tesc, *.tese) do %VULKAN_SDK%/Bin/glslangValidator.exe -V %%i -o %%i.spv
@pause