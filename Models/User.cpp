#include "User.hpp"

NovaRPG::User::User(const std::string& name) : name(name)
{

}

std::string NovaRPG::User::getName()
{
	return name;
}