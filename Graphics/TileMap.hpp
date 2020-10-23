#pragma once

#include <string>
#include <fstream>

namespace NovaRPG
{
	class TileMap
	{
	private:
		std::ifstream tileMap;
	public:
		TileMap(const std::string& path);

		std::string getColumn();
	};
}