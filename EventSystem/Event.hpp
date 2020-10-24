#pragma once

#include <Core/GameObject.hpp>

namespace NovaRPG
{
	class Event
	{
	public:
		sf::RenderWindow* window;

		GameObject* target;

		Event() {}
		Event(sf::RenderWindow* window);
	};
}