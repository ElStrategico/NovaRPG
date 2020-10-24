#pragma once

#include <iostream>

#include <UI/Text.hpp>
#include <UI/Element.hpp>

namespace NovaRPG
{
	class TextBox : public Element
	{
	private:
		Text text;
		sf::RectangleShape textBox;
	public:
		TextBox(
			const sf::Vector2f& size, 
			const sf::Vector2f& position = sf::Vector2f(0.0f, 0.0f)
		);

		virtual void setValue(const std::string& value) override;

		virtual sf::FloatRect getSize() override;
		virtual void setSize(const sf::Vector2f& size) override;

		virtual sf::Vector2f getPosition() override;
		virtual void move(const sf::Vector2f& position) override;
		virtual void setPosition(const sf::Vector2f& position) override;

		virtual void draw(sf::RenderWindow* window) override;
	};
}