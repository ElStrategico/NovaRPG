#pragma once

#include <map>

#include <Graphics/Tile.hpp>

namespace NovaRPG
{
	class TileAssociation
	{
	private:
		std::map<char, std::string> tiles;
	public:
		TileAssociation() {}
		TileAssociation(std::map<char, std::string> tiles);

		void add(char key, std::string tile);

		Tile* find(char key);
	};
}