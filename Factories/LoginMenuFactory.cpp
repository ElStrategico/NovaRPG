#include "LoginMenuFactory.hpp"

int NovaRPG::LoginMenuFactory::itemCharacterSize = 50;

NovaRPG::Menu* NovaRPG::LoginMenuFactory::factory()
{
	Button* loginButton = new Button("Login", itemCharacterSize);

	std::vector<Element*> elements = {
		loginButton
	};

	sf::Vector2f position(
		GameSettings::getScreenWidth() / 2.5,
		GameSettings::getScreenHeight() / 2.5
	);

	return new Menu(elements, position);
}