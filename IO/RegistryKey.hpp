#pragma once

#include <string>

#include <Windows.h>

namespace NovaRPG
{
	class RegistryKey
	{
	private:
		HKEY descriptor;
	public:
		RegistryKey(HKEY descriptor);

		std::wstring get(const std::string& name);
	};
}