#include "LoginMenu.hpp"

NovaRPG::LoginMenu::LoginMenu() : Scene("Login menu")
{
	addGameObject(TileFactory::factoryFullScreen("Assets/MainMenu/Background.png"));
	addGameObject(LoginMenuFactory::factory());
}