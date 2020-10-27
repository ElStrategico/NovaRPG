#include "GameSettings.hpp"

int NovaRPG::GameSettings::getScreenWidth()
{
    return 800;
}

int NovaRPG::GameSettings::getScreenHeight()
{
    return 600;
}

NovaRPG::Scene* NovaRPG::GameSettings::getDefaultScene()
{
    return new MainMenu();
}

std::string NovaRPG::GameSettings::getHost()
{
    return "http://nova-rpg.local";
}

sf::Vector2f NovaRPG::GameSettings::getDefaultTileSize()
{
    const int columns = 16;
    const int rows = 16;

    return sf::Vector2f(
        getScreenWidth()  / columns,
        getScreenHeight() / rows
    );
}