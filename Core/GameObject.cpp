#include "GameObject.hpp"

bool NovaRPG::GameObject::isActive()
{
	return active;
}

void NovaRPG::GameObject::setActive(bool value)
{
	active = value;
}