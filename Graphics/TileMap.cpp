#include "TileMap.hpp"

NovaRPG::TileMap::TileMap(const std::string& tileMap, TileAssociation& tileAssociation) :
tileMap(tileMap), tileAssociation(tileAssociation)
{
	instantiate();
}

NovaRPG::Tile* NovaRPG::TileMap::getTile(int index)
{
	return tiles[index];
}

void NovaRPG::TileMap::instantiate()
{
	std::string row;
	sf::Vector2f currentPosition;
	sf::Vector2f tileSize = GameSettings::getDefaultTileSize();

	while (!(row = getRow()).empty())
	{
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
	while (currentTileMapIndex < tileMap.size())
	{
		char symbol = tileMap[currentTileMapIndex];
		currentTileMapIndex++;

		if (symbol == ' ') break;

		column += symbol;
	}

	return column;
}

void NovaRPG::TileMap::draw(sf::RenderWindow* window)
{
	for (auto tile : tiles)
	{
		tile->draw(window);
	}
}