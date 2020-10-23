#include "TextBox.hpp"

NovaRPG::TextBox::TextBox(const sf::Vector2f& size, const sf::Vector2f& position)
{
	textBox.setSize(size);
	textBox.setPosition(position);
}

sf::FloatRect NovaRPG::TextBox::getSize()
{
	sf::FloatRect size;
	size.width = textBox.getSize().x;
	size.height = textBox.getSize().y;

	return size;
}

void NovaRPG::TextBox::setSize(const sf::Vector2f& size)
{
	//TODO: Implement
}

sf::Vector2f NovaRPG::TextBox::getPosition()
{
	return textBox.getPosition();
}

void NovaRPG::TextBox::move(const sf::Vector2f& position)
{
	textBox.move(position);
}

void NovaRPG::TextBox::setPosition(const sf::Vector2f& position)
{
	textBox.setPosition(position);
}

void NovaRPG::TextBox::draw(sf::RenderWindow* window)
{
	window->draw(textBox);
}