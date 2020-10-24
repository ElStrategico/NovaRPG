#include "LoginMenuFactory.hpp"

int NovaRPG::LoginMenuFactory::itemCharacterSize = 50;
float NovaRPG::LoginMenuFactory::itemInvertal = 5.0f;

NovaRPG::Menu* NovaRPG::LoginMenuFactory::factory()
{
	TextBox* loginTextBox = new TextBox(sf::Vector2f(300.0f, 30.0f));
	loginTextBox->addTag(GameTags::loginInput);
	loginTextBox->setValue("Login");

	Button* loginButton = new Button("Login", itemCharacterSize);
	Button* mainMenuButton = new Button("To main menu", itemCharacterSize);

	EventController::registry(EventType::ON_CLICK, loginButton, onLoginClick());
	EventController::registry(EventType::ON_CLICK, mainMenuButton, onMainMenuClick());

	std::vector<Element*> elements = {
		loginTextBox,
		loginButton,
		mainMenuButton
	};

	sf::Vector2f position(
		GameSettings::getScreenWidth() / 2.5,
		GameSettings::getScreenHeight() / 2.5
	);

	Menu* menu = new Menu(elements, position, itemInvertal);
	menu->addTag(GameTags::loginMenu);
	
	return menu;
}

std::function<void(NovaRPG::Event&)> NovaRPG::LoginMenuFactory::onLoginClick()
{
	return [](Event& event) {
		GameObject* gameObject = SceneController::getCurrent()->findGameObjectByTag(GameTags::loginMenu);
		
		if (gameObject)
		{
			Menu* menu = (Menu*)gameObject;
			GameObject* loginInput = menu->findChildByTag(GameTags::loginInput);

			std::cout << loginInput->getValue() << std::endl;
		}
	};
}

std::function<void(NovaRPG::Event&)> NovaRPG::LoginMenuFactory::onMainMenuClick()
{
	return [](Event& event) {
		SceneController::switchScene(new MainMenu());
	};
}