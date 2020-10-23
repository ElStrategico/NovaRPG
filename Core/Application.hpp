#pragma once

#include <iostream>

#include <SFML/Graphics.hpp>

#include <Scenes/Scene.hpp>
#include <Core/GameSettings.hpp>
#include <Scenes/SceneController.hpp>
#include <EventSystem/EventController.hpp>

namespace NovaRPG
{
	class Application
	{
	private:
		sf::RenderWindow* window;
	public:
		Application();
		~Application();

		void run();
	};
}