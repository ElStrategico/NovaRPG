#include "TileAssociation.hpp"

NovaRPG::TileAssociation::TileAssociation(std::map<char, std::string> tiles) : tiles(tiles)
{

}

void NovaRPG::TileAssociation::add(char key, std::string tile)
{
	tiles[key] = tile;
}

NovaRPG::Tile* NovaRPG::TileAssociation::find(char key)
{
	if (tiles.find(key) == tiles.end())
	{
		return nullptr;
	}

	return new Tile(tiles[key]);
}