#pragma once

#include <string>
#include <vector>

#include <Core/GameObject.hpp>

namespace NovaRPG
{
	class TileMap;

	class Scene : public IDrawable
	{
	protected:
		std::string name;
		
		TileMap* tileMap;

		std::vector<GameObject*> gameObjects;
	public:
		Scene(const std::string& name, TileMap* tileMap = nullptr);
		virtual ~Scene();

		std::string getName();

		void addGameObject(GameObject* gameObject);

		GameObject* findGameObjectByTag(const std::string& tag);

		virtual void draw(sf::RenderWindow* window) override;
	};
}