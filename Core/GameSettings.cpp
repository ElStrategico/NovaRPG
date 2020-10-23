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
