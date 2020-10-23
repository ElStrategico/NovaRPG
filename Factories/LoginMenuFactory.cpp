#include "LoginMenuFactory.hpp"

int NovaRPG::LoginMenuFactory::itemCharacterSize = 50;

NovaRPG::Menu* NovaRPG::LoginMenuFactory::factory()
{
	TextBox* login = new TextBox(sf::Vector2f(300.0f, 30.0f));
	Button* loginButton = new Button("Login", itemCharacterSize);
	Button* mainMenuButton = new Button("To main menu", itemCharacterSize);

	EventController::registry(EventType::ON_CLICK, loginButton, onLoginClick());
	EventController::registry(EventType::ON_CLICK, mainMenuButton, onMainMenuClick());

	std::vector<Element*> elements = {
		login,
		loginButton,
		mainMenuButton
	};

	sf::Vector2f position(
		GameSettings::getScreenWidth() / 2.5,
		GameSettings::getScreenHeight() / 2.5
	);

	return new Menu(elements, position);
}

std::function<void(NovaRPG::Event&)> NovaRPG::LoginMenuFactory::onLoginClick()
{
	return [](Event& event) {
		std::cout << "Login" << std::endl;
	};
}

std::function<void(NovaRPG::Event&)> NovaRPG::LoginMenuFactory::onMainMenuClick()
{
	return [](Event& event) {
		SceneController::switchScene(new MainMenu());
	};
}