#pragma once

#include <string>

#include <SFML/Graphics.hpp>

#include <Core/IDrawable.hpp>
#include <Core/GameObject.hpp>

namespace NovaRPG
{
	class Tile : public GameObject, public IDrawable
	{
	private:
		sf::Sprite tile;
		sf::Texture texture;
	public:
		Tile() {}
		Tile(const std::string& path);

		void load(const std::string& path);

		virtual sf::FloatRect getSize() override;
		void setSize(float width, float height);
		virtual void setSize(const sf::Vector2f& size) override;

		virtual sf::Vector2f getPosition() override;
		virtual void move(const sf::Vector2f& position) override;
		virtual void setPosition(const sf::Vector2f& position) override;

		virtual void draw(sf::RenderWindow* window) override;
	};
}