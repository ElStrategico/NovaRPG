#pragma once

#include <string>
#include <vector>

#include <Core/IDrawable.hpp>
#include <Core/GameObject.hpp>

namespace NovaRPG
{
	class Scene : public IDrawable
	{
	private:
		std::string name;
	protected:
		std::vector<GameObject*> gameObjects;
	public:
		Scene(const std::string& name);
		virtual ~Scene();

		std::string getName();

		void addGameObject(GameObject* gameObject);

		GameObject* findGameObjectByTag(const std::string& tag);

		virtual void draw(sf::RenderWindow* window) override;
	};
}