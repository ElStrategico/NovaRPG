#pragma once

#include <SFML/Graphics.hpp>

namespace NovaRPG
{
	class IDrawable
	{
	public:
		virtual void draw(sf::RenderWindow* window) = 0;
	};
}