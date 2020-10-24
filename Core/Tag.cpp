#include "Tag.hpp"

NovaRPG::Tag::Tag(const std::string& name) : name(name)
{

}

std::string NovaRPG::Tag::getName()
{
	return name;
}