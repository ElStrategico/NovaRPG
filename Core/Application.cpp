#include "Application.hpp"

NovaRPG::Application::Application()
{
	window = new sf::RenderWindow(
		sf::VideoMode(GameSettings::getScreenWidth(), GameSettings::getScreenHeight()), 
		"NovaRPG"
	);
	SceneController::init(GameSettings::getDefaultScene());
}

NovaRPG::Application::~Application()
{
	if (window) delete window;
}

void NovaRPG::Application::run()
{
	while (window->isOpen())
	{
		EventController::handle(window);

		window->clear();
		SceneController::getCurrent()->draw(window);
		window->display();
	}
}