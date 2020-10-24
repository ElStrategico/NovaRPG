#pragma once

#include <Graphics/Tile.hpp>
#include <Core/GameSettings.hpp>

namespace NovaRPG
{
	class TileFactory
	{
	public:
		static Tile* factoryFullScreen(const std::string& path);
	};
}