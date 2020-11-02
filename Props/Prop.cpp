#include "Prop.hpp"

NovaRPG::Prop::Prop(const std::string& path) : sprite(Sprite(path))
{

}

sf::FloatRect NovaRPG::Prop::getSize()
{
	return sprite.get()->getLocalBounds();
}

void NovaRPG::Prop::setSize(const sf::Vector2f& size)
{

}

sf::Vector2f NovaRPG::Prop::getPosition()
{
	return sprite.get()->getPosition();
}

void NovaRPG::Prop::move(const sf::Vector2f& position)
{
	sprite.get()->move(position);
}

void NovaRPG::Prop::setPosition(const sf::Vector2f& position)
{
	sprite.get()->setPosition(position);
}

void NovaRPG::Prop::draw(sf::RenderWindow* window)
{
	sprite.draw(window);
}