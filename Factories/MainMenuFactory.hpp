#pragma once

#include <iostream>
#include <functional>

#include <UI/Menu.hpp>
#include <UI/Button.hpp>
#include <Network/Auth.hpp>
#include <Scenes/Market.hpp>
#include <Scenes/LoginMenu.hpp>
#include <Core/GameSettings.hpp>
#include <Scenes/SceneController.hpp>
#include <EventSystem/EventController.hpp>

namespace NovaRPG
{
	class MainMenuFactory
	{
	private:
		static int itemCharacterSize;
		static float itemInvertal;

		static std::function<void(Event&)> onPlayClick();
		static std::function<void(Event&)> onSettingsClick();
		static std::function<void(Event&)> onExitClick();

		static std::function<void(Event&)> onProfileClick();
		static std::function<void(Event&)> onLogoutClick();
	public:
		static Menu* factory();
		static Menu* factoryProfileMenu();
	};
}