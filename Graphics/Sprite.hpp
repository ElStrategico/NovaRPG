#pragma once

#include <SFML/Graphics.hpp>
#include <Core/IDrawable.hpp>

namespace NovaRPG
{
	class Sprite : public IDrawable
	{
	private:
		sf::Texture* texture;
		sf::Sprite* sprite;
	public:
		Sprite();
		Sprite(const std::string& path);
		~Sprite();

		sf::Sprite* get();
		void set(const std::string& path);

		virtual void draw(sf::RenderWindow* window) override;
	};
}