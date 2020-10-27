#include "MainMenu.hpp"

NovaRPG::MainMenu::MainMenu() : Scene("MainMenu")
{
	addGameObject(TileFactory::factoryFullScreen("Assets/MainMenu/Background.png"));
	addGameObject(MainMenuFactory::factory());
	addGameObject(MainMenuFactory::factoryProfileMenu());
}