#include "GameObject.hpp"

#include <EventSystem/EventController.hpp>

NovaRPG::GameObject::~GameObject()
{
	EventController::deleteForGameObject(this);
}

bool NovaRPG::GameObject::isActive()
{
	return active;
}

void NovaRPG::GameObject::setActive(bool value)
{
	active = value;
}