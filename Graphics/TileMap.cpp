#include "TileMap.hpp"

NovaRPG::TileMap::TileMap(const std::string& path)
{
	tileMap.open(path);
}

std::string NovaRPG::TileMap::getColumn()
{
	std::string column;
	tileMap >> column;

	return column;
}
