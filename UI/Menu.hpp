#pragma once

#include <vector>

#include <UI/Element.hpp>

namespace NovaRPG
{
	class Menu : public Element
	{
	private:
		float interval = 0.0f;
		std::vector<Element*> items;

		void normalizeByPosition(sf::Vector2f position);
	public:
		Menu() {}
		Menu(
			const std::vector<Element*> items, 
			const sf::Vector2f& position = sf::Vector2f(0.0f, 0.0f),
			float interval = 0.0f
		);
		~Menu();

		virtual sf::FloatRect getSize() override;
		virtual void setSize(const sf::Vector2f& size) override;

		virtual sf::Vector2f getPosition() override;
		virtual void move(const sf::Vector2f& position) override;
		virtual void setPosition(const sf::Vector2f& position) override;

		virtual void draw(sf::RenderWindow* window) override;
	};
}