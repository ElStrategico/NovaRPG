#include "Scene.hpp"

NovaRPG::Scene::Scene(const std::string& name) : name(name)
{
    
}

std::string NovaRPG::Scene::getName()
{
    return name;
}

void NovaRPG::Scene::draw(sf::RenderWindow* window)
{

}