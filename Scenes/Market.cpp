#include "Market.hpp"

#include <Graphics/TileMap.hpp>

NovaRPG::Market::Market() : Scene("Market", MarketFactory::factoryTileMap())
{

}