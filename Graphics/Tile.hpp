#pragma once

#include <string>

#include <SFML/Graphics.hpp>

#include <Core/IDrawable.hpp>

namespace NovaRPG
{
	class Tile : public IDrawable
	{
	private:
		sf::Sprite tile;
		sf::Texture texture;
	public:
		Tile() {}
		Tile(const std::string& path);

		void load(const std::string& path);

		void setSize(float width, float height);

		virtual void draw(sf::RenderWindow* window) override;
	};
}