#include "Registry.hpp"

NovaRPG::RegistryKey NovaRPG::Registry::open(const std::wstring& subKey, HKEY key)
{
    HKEY descriptor;
    RegOpenKey(key, subKey.c_str(), &descriptor);

    return RegistryKey(descriptor);
}