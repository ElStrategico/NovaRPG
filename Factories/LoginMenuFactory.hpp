#pragma once

#include <iostream>
#include <functional>

#include <UI/Menu.hpp>
#include <UI/Button.hpp>
#include <UI/TextBox.hpp>
#include <Scenes/MainMenu.hpp>
#include <Core/GameSettings.hpp>
#include <Scenes/SceneController.hpp>
#include <EventSystem/EventController.hpp>

namespace NovaRPG
{
	class LoginMenuFactory
	{
	private:
		static int itemCharacterSize;

		static std::function<void(Event&)> onLoginClick();
		static std::function<void(Event&)> onMainMenuClick();
	public:
		static Menu* factory();
	};
}