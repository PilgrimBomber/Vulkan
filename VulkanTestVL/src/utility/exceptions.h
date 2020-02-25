#pragma once
/************************************************************************/
/* For lecture purpose only 
/* author: ajaeger
/* date:
/* version:
/* none productive code
/************************************************************************/

#include <errors.h>

namespace VulkanLibrary {
	namespace EM {
		class SDErrorLCP : public std::exception
		{
		public:
		protected:
		private:
		};

		class DllLoaderError : public SDErrorLCP{};
	}
}