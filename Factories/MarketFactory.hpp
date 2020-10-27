#pragma once

#include <Graphics/TileMap.hpp>

namespace NovaRPG
{
	class MarketFactory
	{
	public:
		static TileMap* factoryTileMap();
	};
}