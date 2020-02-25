#include "DllLoader.h"

DllLoader::DllLoader()
{
	this->_dll = NULL;
}

DllLoader::~DllLoader()
{
}

LIBRARY_TYPE DllLoader::LoadVulkanDll()
{
#ifdef _WIN32
	this -> _dll = LoadLibrary(TEXT("vulkan-1.dll"));
#elif defined _linux
	_dll = dlopen("libvulkan.so.1", RTLD_NOW);
#endif

	if (this -> _dll == nullptr)
	{
		cout << "Could not load Vulkan runtime library" << endl;
		return NULL;
	}
	else
	{
		cout << "Successfully loaded Library  \"vulkan-1.dll\"" << endl;
		return this->_dll;
	}

	return NULL;
}

//LIBRARY_TYPE DllLoader::LoadDll(const char* dllName)
//{
//	wchar_t name[255];
//	size_t outsize;
//	mbstowcs_s(&outsize,name, strlen(dllName) + 1, dllName, strlen(dllName));
//	LIBRARY_TYPE lib = LoadLibrary(name);
//	if (lib == nullptr)
//	{
//		std::cout << "Failed to load Library:" << dllName << std::endl;
//	}
//	else
//	{
//		std::cout << "Successfully loaded Library:" << dllName << std::endl;
//	}
//	_dll = lib;
//	return lib;
//}

LIBRARY_TYPE DllLoader::GetLibrary()
{
	if (this->_dll == NULL) DllLoader::LoadVulkanDll();
	return this -> _dll;
}
