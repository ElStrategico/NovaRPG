#include "Scene.hpp"

NovaRPG::Scene::Scene(const std::string& name) : name(name)
{
    
}

NovaRPG::Scene::~Scene()
{
	for (auto& gameObject : gameObjects)
	{
		if (gameObject) delete gameObject;
	}
}

std::string NovaRPG::Scene::getName()
{
    return name;
}

void NovaRPG::Scene::addGameObject(GameObject* gameObject)
{
    gameObjects.push_back(gameObject);
}

NovaRPG::GameObject* NovaRPG::Scene::findGameObjectByTag(const std::string& tag)
{
	for (auto& gameObject : gameObjects)
	{
		if (gameObject->existsTag(tag))
		{
			return gameObject;
		}
	}

	return nullptr;
}

void NovaRPG::Scene::draw(sf::RenderWindow* window)
{
	for (auto& gameObject : gameObjects)
	{
		if (gameObject->isActive())
		{
			gameObject->draw(window);
		}
	}
}