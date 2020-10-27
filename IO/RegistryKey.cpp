#include "RegistryKey.hpp"

NovaRPG::RegistryKey::RegistryKey(HKEY descriptor) : descriptor(descriptor)
{

}

std::wstring NovaRPG::RegistryKey::get(const std::string& name)
{
	return std::wstring();
}
