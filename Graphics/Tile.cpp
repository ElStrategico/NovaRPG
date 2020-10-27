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

void NovaRPG::Tile::setSize(const sf::Vector2f& size)
{
	sprite.get()->setScale(
		size.x / sprite.get()->getLocalBounds().width,
		size.y / sprite.get()->getLocalBounds().height
	);
}

void NovaRPG::Tile::setSize(float width, float height)
{
	sf::Vector2f position(width, height);

	setSize(position);
}

sf::Vector2f NovaRPG::Tile::getPosition()
{
	return sprite.get()->getPosition();
}

void NovaRPG::Tile::move(const sf::Vector2f& position)
{
	sprite.get()->move(position);
}

void NovaRPG::Tile::setPosition(const sf::Vector2f& position)
{
	sprite.get()->setPosition(position);
}

void NovaRPG::Tile::draw(sf::RenderWindow* window)
{
	sprite.draw(window);
}