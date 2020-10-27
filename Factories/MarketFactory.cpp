#include "MarketFactory.hpp"

NovaRPG::TileMap* NovaRPG::MarketFactory::factoryTileMap()
{
	TileAssociation tileAssociation;

	tileAssociation.add('s', "Assets/Tiles/Sand.png");
	tileAssociation.add('g', "Assets/Tiles/Grass.png");
	tileAssociation.add('t', "Assets/Tiles/SandTop.png");
	tileAssociation.add('l', "Assets/Tiles/SandLeft.png");
	tileAssociation.add('r', "Assets/Tiles/SandRight.png");
	tileAssociation.add('b', "Assets/Tiles/SandBottom.png");
	tileAssociation.add('w', "Assets/Tiles/SandLeftTop.png");
	tileAssociation.add('e', "Assets/Tiles/SandTopRight.png");
	tileAssociation.add('o', "Assets/Tiles/SandWithStone.png");
	tileAssociation.add('q', "Assets/Tiles/SandRightBottom.png");

	return new TileMap("Assets/TileMaps/Market.txt", tileAssociation);
}
