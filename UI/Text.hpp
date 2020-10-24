#pragma once

#include <string>
#include <cstdint>

#include <SFML/Graphics.hpp>

#include <UI/Element.hpp>

namespace NovaRPG
{
	class Text : public Element
	{
	private:
		sf::Text text;
		sf::Font font;
	public:
		Text(
			const std::string& text = "",
			uint32_t size = 30,
			const sf::Vector2f& position = sf::Vector2f(0.0f, 0.0f),
			const sf::Color& color = sf::Color::White,
			const std::string& font = "Assets/Fonts/Font.ttf"
		);

		virtual void setValue(const std::string& value) override;
		void setCharacterSize(uint32_t size);
		void setColor(const sf::Color& color);

		virtual sf::FloatRect getSize() override;
		virtual void setSize(const sf::Vector2f& size) override;

		virtual sf::Vector2f getPosition() override;
		virtual void move(const sf::Vector2f& position) override;
		virtual void setPosition(const sf::Vector2f& position) override;

		virtual void draw(sf::RenderWindow* window) override;
	};
}