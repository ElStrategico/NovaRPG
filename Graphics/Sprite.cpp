#include "Sprite.hpp"

NovaRPG::Sprite::Sprite()
{
	texture = new sf::Texture();
	sprite = new sf::Sprite();
}

NovaRPG::Sprite::Sprite(const std::string& path)
{
	texture = new sf::Texture();
	sprite = new sf::Sprite();

	texture->loadFromFile(path);
	sprite->setTexture(*texture);
}

NovaRPG::Sprite::~Sprite()
{
	if (texture) delete texture;
	if (sprite) delete sprite;
}

sf::Sprite* NovaRPG::Sprite::get()
{
	return sprite;
}

void NovaRPG::Sprite::set(const std::string& path)
{
	texture->loadFromFile(path);
	sprite->setTexture(*texture);
}

void NovaRPG::Sprite::draw(sf::RenderWindow* window)
{
	window->draw(*sprite);
}
