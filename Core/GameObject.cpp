#include "GameObject.hpp"

#include <EventSystem/EventController.hpp>

NovaRPG::GameObject::~GameObject()
{
	EventController::deleteForGameObject(this);
	if (EventController::currentEditable == this)
	{
		EventController::currentEditable = nullptr;
	}
}

void NovaRPG::GameObject::addTag(const std::string& name)
{
	addTag(Tag(name));
}

void NovaRPG::GameObject::addTag(const Tag& tag)
{
	tags.push_back(tag);
}

bool NovaRPG::GameObject::existsTag(const std::string& name)
{
	for (auto& tag : tags)
	{
		if (tag.getName() == name)
		{
			return true;
		}
	}

	return false;
}

std::vector<NovaRPG::Tag> NovaRPG::GameObject::getTags()
{
	return tags;
}

std::string NovaRPG::GameObject::getValue()
{
	return value;
}

void NovaRPG::GameObject::setValue(const std::string& value)
{
	this->value = value;
}

void NovaRPG::GameObject::appendValue(const std::string& value)
{
	this->value += value;
}

bool NovaRPG::GameObject::isActive()
{
	return active;
}

void NovaRPG::GameObject::setActive(bool value)
{
	active = value;
}