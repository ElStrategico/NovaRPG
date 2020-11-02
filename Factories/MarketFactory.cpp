#include "MarketFactory.hpp"

NovaRPG::TileMap* NovaRPG::MarketFactory::factoryTileMap()
{
	std::map<char, std::string> tiles = {
		{'s', "Assets/Tiles/Sand.png"},
		{'g', "Assets/Tiles/Grass.png"},
		{'t', "Assets/Tiles/SandTop.png"},
		{'l', "Assets/Tiles/SandLeft.png"},
		{'r', "Assets/Tiles/SandRight.png"},
		{'b', "Assets/Tiles/SandBottom.png"},
		{'w', "Assets/Tiles/SandLeftTop.png"},
		{'e', "Assets/Tiles/SandTopRight.png"},
		{'o', "Assets/Tiles/SandWithStone.png"},
		{'q', "Assets/Tiles/SandRightBottom.png"}
	};

	TileAssociation tileAssociation(tiles);

	return new TileMap("Assets/TileMaps/Market.txt", tileAssociation);
}
