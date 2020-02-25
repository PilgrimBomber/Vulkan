#pragma once
#include "common.h"




using namespace std;

class DllLoader
{
public:
	DllLoader();
	~DllLoader();
	LIBRARY_TYPE LoadVulkanDll();
	LIBRARY_TYPE LoadDll(const char* dllName);
	LIBRARY_TYPE GetLibrary();
private:
	LIBRARY_TYPE _dll;
};

