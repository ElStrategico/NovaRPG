#include "MainMenu.hpp"

NovaRPG::MainMenu::MainMenu() : Scene("MainMenu")
{
	mainMenu = MainMenuFactory::factory();

	background.load("Assets/MainMenu/Background.png");
	background.setSize(
		GameSettings::getScreenWidth(),
		GameSettings::getScreenHeight()
	);
}

NovaRPG::MainMenu::~MainMenu()
{
	if (mainMenu) delete mainMenu;
}

void NovaRPG::MainMenu::draw(sf::RenderWindow* window)
{
	background.draw(window);
	mainMenu->draw(window);
}
