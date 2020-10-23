#include "Tile.hpp"

NovaRPG::Tile::Tile(const std::string& path)
{
	load(path);
}

void NovaRPG::Tile::load(const std::string& path)
{
	texture.loadFromFile(path);
	tile.setTexture(texture);
}

void NovaRPG::Tile::setSize(float width, float height)
{
	tile.setScale(
		width / tile.getLocalBounds().width,
		height / tile.getLocalBounds().height
	);
}

void NovaRPG::Tile::draw(sf::RenderWindow* window)
{
	window->draw(tile);
}