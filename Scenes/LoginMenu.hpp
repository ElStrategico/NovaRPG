#pragma once

#include <UI/Menu.hpp>
#include <Scenes/Scene.hpp>
#include <Graphics/Tile.hpp>
#include <Core/GameSettings.hpp>
#include <Factories/LoginMenuFactory.hpp>

namespace NovaRPG
{
	class LoginMenu : public Scene
	{
	private:
		Menu* loginMenu;
		Tile background;
	public:
		LoginMenu();

		virtual void draw(sf::RenderWindow* window) override;
	};
}