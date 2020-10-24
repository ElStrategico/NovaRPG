#include "Text.hpp"

NovaRPG::Text::Text(
	const std::string& text,
	uint32_t size,
	const sf::Vector2f& position,
	const sf::Color& color,
	const std::string& font
)
{
	this->font.loadFromFile(font);

	setValue(text);
	this->text.setCharacterSize(size);
	this->text.setPosition(position);
	this->text.setFillColor(color);
	this->text.setFont(this->font);
}

void NovaRPG::Text::setValue(const std::string& value)
{
	text.setString(value);
	this->value = value;
}

void NovaRPG::Text::setCharacterSize(uint32_t size)
{
	text.setCharacterSize(size);
}

void NovaRPG::Text::setColor(const sf::Color& color)
{
	text.setFillColor(color);
}

sf::FloatRect NovaRPG::Text::getSize()
{
	return text.getLocalBounds();
}

void NovaRPG::Text::setSize(const sf::Vector2f& size)
{
	//TODO: Implement
}

sf::Vector2f NovaRPG::Text::getPosition()
{
	return text.getPosition();
}

void NovaRPG::Text::move(const sf::Vector2f& position)
{
	text.move(position);
}

void NovaRPG::Text::setPosition(const sf::Vector2f& position)
{
	text.setPosition(position);
}

void NovaRPG::Text::draw(sf::RenderWindow* window)
{
	window->draw(text);
}