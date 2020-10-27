#include "Tile.hpp"

NovaRPG::Tile::Tile(const std::string& path)
{
	load(path);
}

void NovaRPG::Tile::load(const std::string& path)
{
	sprite.set(path);
}

sf::FloatRect NovaRPG::Tile::getSize()
{
	return sf::FloatRect();
}

void NovaRPG::Tile::setSize(float width, float height)
{
	sprite.get()->setScale(
		width  / sprite.get()->getLocalBounds().width,
		height / sprite.get()->getLocalBounds().height
	);
}

void NovaRPG::Tile::setSize(const sf::Vector2f& size)
{
}

sf::Vector2f NovaRPG::Tile::getPosition()
{
	return sf::Vector2f();
}

void NovaRPG::Tile::move(const sf::Vector2f& position)
{
}

void NovaRPG::Tile::setPosition(const sf::Vector2f& position)
{
}

void NovaRPG::Tile::draw(sf::RenderWindow* window)
{
	sprite.draw(window);
}