#include "TextBox.hpp"

#include <EventSystem/EventController.hpp>

NovaRPG::TextBox::TextBox(const sf::Vector2f& size, const sf::Vector2f& position) : text(Text())
{
	text.setColor(sf::Color::Black);

	setSize(size);
	setPosition(position);

	EventController::registry(EventType::ON_CLICK, this, [&](Event& event) {
		EventController::currentEditable = this;
	});
}

void NovaRPG::TextBox::setValue(const std::string& value)
{
	this->value = value;
	text.setValue(value);
}

void NovaRPG::TextBox::appendValue(char symbol)
{
	this->value += symbol;
	text.setValue(value);
}

void NovaRPG::TextBox::eraseLast()
{
	if (!value.empty())
	{
		setValue(value.substr(0, value.size() - 1));
	}
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
	textBox.setSize(size);
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
	text.setPosition(sf::Vector2f(
		position.x, position.y - (position.y / 100.0f) * 2.0f
	));
	textBox.setPosition(position);
}

void NovaRPG::TextBox::draw(sf::RenderWindow* window)
{
	window->draw(textBox);
	text.draw(window);
}