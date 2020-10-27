#pragma once

#include <string>

#include <Windows.h>

#include <IO/RegistryKey.hpp>

namespace NovaRPG
{
	class Registry
	{
	public:
		RegistryKey static open(const std::wstring& subKey, HKEY key = HKEY_CURRENT_USER);
	};
}