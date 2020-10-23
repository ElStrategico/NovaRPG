#pragma once

#include <UI/Menu.hpp>
#include <Scenes/Scene.hpp>
#include <Graphics/Tile.hpp>
#include <Core/GameSettings.hpp>
#include <Factories/MainMenuFactory.hpp>

namespace NovaRPG
{
	class MainMenu : public Scene
	{
	private:
		Menu* mainMenu;
		Tile background;
	public:
		MainMenu();
		~MainMenu();

		virtual void draw(sf::RenderWindow* window) override;
	};
}