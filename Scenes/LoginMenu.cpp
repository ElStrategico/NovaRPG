#include "LoginMenu.hpp"

NovaRPG::LoginMenu::LoginMenu() : Scene("Login menu")
{
	loginMenu = LoginMenuFactory::factory();

	background.load("Assets/MainMenu/Background.png");
	background.setSize(
		GameSettings::getScreenWidth(),
		GameSettings::getScreenHeight()
	);
}

NovaRPG::LoginMenu::~LoginMenu()
{
	if (loginMenu) delete loginMenu;
}

void NovaRPG::LoginMenu::draw(sf::RenderWindow* window)
{
	background.draw(window);
	loginMenu->draw(window);
}