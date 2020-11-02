#include "Market.hpp"

#include <Graphics/TileMap.hpp>

NovaRPG::Market::Market() : Scene("Market")
{
	SceneFile sceneFile("Assets/Scenes/Market.xml");

	tileMap = sceneFile.getTileMap();
	propsMap = sceneFile.getPropsMap();
}