#pragma once

#include <string>

#include <Scenes/Scene.hpp>
#include <Scenes/MainMenu.hpp>

namespace NovaRPG
{
	class GameSettings
	{
	public:
		static int getScreenWidth();
		static int getScreenHeight();
		static Scene* getDefaultScene();
		static std::string getHost();
	};
}