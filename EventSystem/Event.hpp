#pragma once

#include <Core/GameObject.hpp>

namespace NovaRPG
{
	class Event
	{
	public:
		sf::RenderWindow* window;

		GameObject* target;

		Event(sf::RenderWindow* window);
	};
}