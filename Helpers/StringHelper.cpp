#include "StringHelper.hpp"

std::string NovaRPG::StringHelper::replaceAll(const std::string& replaceable, char replacement)
{
    std::string result;

    for (int i = 0; i < replaceable.size(); i++)
    {
        result += replacement;
    }

    return result;
}
