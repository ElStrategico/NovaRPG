#pragma once

#include <string>

#include <SFML/Graphics.hpp>

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
		static sf::Vector2f getDefaultTileSize();
	};
}