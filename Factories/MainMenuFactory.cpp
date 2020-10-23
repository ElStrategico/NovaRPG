#include "MainMenuFactory.hpp"

int NovaRPG::MainMenuFactory::itemCharacterSize = 50;

NovaRPG::Menu* NovaRPG::MainMenuFactory::factory()
{
	Button* playButton = new Button("Play", itemCharacterSize);
	Button* settingsButton = new Button("Settings", itemCharacterSize);
	Button* exitButton = new Button("Exit", itemCharacterSize);

	EventController::registry(EventType::ON_CLICK, playButton, onPlayClick());
	EventController::registry(EventType::ON_CLICK, settingsButton, onSettingsClick());
	EventController::registry(EventType::ON_CLICK, exitButton, onExitClick());

	std::vector<Element*> elements = {
		playButton,
		settingsButton,
		exitButton
	};

	sf::Vector2f position(
		GameSettings::getScreenWidth() / 2.5,
		GameSettings::getScreenHeight() / 2.5
	);

	return new Menu(elements, position);
}

std::function<void(NovaRPG::Event&)> NovaRPG::MainMenuFactory::onPlayClick()
{
	if (Auth::isUser())
	{
		return [](Event& event) {
			std::cout << "Play user" << std::endl;
		};
	}
	return [](Event& event) {
		SceneController::switchScene(new LoginMenu());
	};
}

std::function<void(NovaRPG::Event&)> NovaRPG::MainMenuFactory::onSettingsClick()
{
	return [](Event& event) {
		std::cout << "Settings" << std::endl;
	};
}

std::function<void(NovaRPG::Event&)> NovaRPG::MainMenuFactory::onExitClick()
{
	return [](Event& event) {
		event.window->close();
	};
}