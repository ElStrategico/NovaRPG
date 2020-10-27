#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <iostream>

#include <Core/IDrawable.hpp>
#include <Core/GameSettings.hpp>
#include <Graphics/TileAssociation.hpp>

namespace NovaRPG
{
	class TileMap : public IDrawable
	{
	private:
		std::vector<Tile*> tiles;

		std::ifstream tileMap;
		TileAssociation tileAssociation;

		void instantiate();
	public:
		TileMap(
			const std::string& path,
			TileAssociation& tileAssociation
		);

		std::string getRow();

		virtual void draw(sf::RenderWindow* window) override;
	};
}