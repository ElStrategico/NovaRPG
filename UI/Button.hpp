#pragma once

#include <string>
#include <cstdint>

#include <UI/Text.hpp>
#include <UI/Element.hpp>

namespace NovaRPG
{
	class Button : public Element
	{
	private:
		Text text;
	public:
		Button() {}
		Button(Text& text);
		Button(const std::string& sText, uint32_t size, const sf::Color color = sf::Color::White);

		virtual sf::FloatRect getSize() override;
		virtual void setSize(const sf::Vector2f& size) override;

		virtual sf::Vector2f getPosition() override;
		virtual void move(const sf::Vector2f& position) override;
		virtual void setPosition(const sf::Vector2f& position) override;

		virtual void draw(sf::RenderWindow* window) override;
	};
}