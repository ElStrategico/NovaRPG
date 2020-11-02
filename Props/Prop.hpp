#pragma once

#include <Core/GameObject.hpp>
#include <Graphics/Sprite.hpp>

namespace NovaRPG
{
	class Prop : public GameObject
	{
	protected:
		Sprite sprite;
	public:
		Prop(const std::string& path);
		virtual ~Prop() {}

		virtual void initPropEvents() = 0;

		virtual sf::FloatRect getSize() override;
		virtual void setSize(const sf::Vector2f& size) override;

		virtual sf::Vector2f getPosition() override;
		virtual void move(const sf::Vector2f& position) override;
		virtual void setPosition(const sf::Vector2f& position) override;

		virtual void draw(sf::RenderWindow* window) override;
	};
}