#pragma once

#include <SFML/Graphics.hpp>

namespace NovaRPG
{
	class ITransformable
	{
	public:
		virtual ~ITransformable() {}

		virtual sf::FloatRect getSize() = 0;
		virtual void setSize(const sf::Vector2f& size) = 0;

		virtual sf::Vector2f getPosition() = 0;
		virtual void move(const sf::Vector2f& position) = 0;
		virtual void setPosition(const sf::Vector2f& position) = 0;
	};
}