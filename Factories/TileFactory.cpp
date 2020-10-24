#include "TileFactory.hpp"

NovaRPG::Tile* NovaRPG::TileFactory::factoryFullScreen(const std::string& path)
{
    Tile* tile = new Tile(path);

    tile->setSize(
        GameSettings::getScreenWidth(),
        GameSettings::getScreenHeight()
    );

    return tile;
}
