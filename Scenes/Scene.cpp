#include "Scene.hpp"

#include <Graphics/TileMap.hpp>

NovaRPG::Scene::Scene(const std::string& name, TileMap* tileMap) : name(name), tileMap(tileMap)
{
    
}

NovaRPG::Scene::~Scene()
{
	if (tileMap) delete tileMap;

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
	if (tileMap)
	{
		tileMap->draw(window);
	}

	for (auto& gameObject : gameObjects)
	{
		if (gameObject->isActive())
		{
			gameObject->draw(window);
		}
	}
}