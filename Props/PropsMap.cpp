#include "PropsMap.hpp"

NovaRPG::PropsMap::~PropsMap()
{
	for (auto prop : props)
	{
		if (prop) delete prop;
	}
}

void NovaRPG::PropsMap::addProp(Prop* prop)
{
	props.push_back(prop);
}

void NovaRPG::PropsMap::draw(sf::RenderWindow* window)
{
	for (auto prop : props)
	{
		prop->draw(window);
	}
}
