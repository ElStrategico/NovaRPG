#pragma once

#include <string>

#include <Core/IDrawable.hpp>

namespace NovaRPG
{
	class Scene : public IDrawable
	{
	private:
		std::string name;
	public:
		Scene(const std::string& name);
		virtual ~Scene() {}

		std::string getName();

		virtual void draw(sf::RenderWindow* window) override;
	};
}