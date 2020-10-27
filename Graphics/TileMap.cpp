#include "TileMap.hpp"

NovaRPG::TileMap::TileMap(const std::string& path, TileAssociation& tileAssociation) :
tileAssociation(tileAssociation)
{
	tileMap.open(path);

	instantiate();
}

void NovaRPG::TileMap::instantiate()
{
	std::string row;
	sf::Vector2f currentPosition;
	sf::Vector2f tileSize = GameSettings::getDefaultTileSize();

	while (!tileMap.eof())
	{
		row = getRow();
		
		for (auto& key : row)
		{
			Tile* tile = tileAssociation.find(key);
			
			if(tile)
			{
				tile->setSize(tileSize);
				tile->setPosition(currentPosition);

				currentPosition.x += tileSize.x;

				tiles.push_back(tile);
			}
		}

		currentPosition.x = 0.0f;
		currentPosition.y += tileSize.y;
	}
}

std::string NovaRPG::TileMap::getRow()
{
	std::string column;
	tileMap >> column;

	return column;
}

void NovaRPG::TileMap::draw(sf::RenderWindow* window)
{
	for (auto tile : tiles)
	{
		tile->draw(window);
	}
}