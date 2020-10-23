#include "Button.hpp"

NovaRPG::Button::Button(Text& text) : text(text)
{

}

NovaRPG::Button::Button(const std::string& sText, uint32_t size, const sf::Color color) : text(Text(sText, size))
{
	text.setColor(color);
}

sf::FloatRect NovaRPG::Button::getSize()
{
	return text.getSize();
}

void NovaRPG::Button::setSize(const sf::Vector2f& size)
{
	//TODO: Implement
}

sf::Vector2f NovaRPG::Button::getPosition()
{
	return text.getPosition();
}

void NovaRPG::Button::move(const sf::Vector2f& position)
{
	text.move(position);
}

void NovaRPG::Button::setPosition(const sf::Vector2f& position)
{
	text.setPosition(position);
}

void NovaRPG::Button::draw(sf::RenderWindow* window)
{
	text.draw(window);
}
