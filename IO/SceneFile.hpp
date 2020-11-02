#pragma once

#include <string>
#include <iostream>

#include <Props/PropsMap.hpp>
#include <Props/Includes.hpp>
#include <Props/PropController.hpp>

#include <Graphics/TileMap.hpp>
#include <Graphics/TileAssociation.hpp>

#include <Vendor/TinyXML/tinyxml.h>

namespace NovaRPG
{
	class SceneFile
	{
	private:
		TiXmlDocument sceneFile;

		TileMap* tileMap = nullptr;
		PropsMap* propsMap = nullptr;
	public:
		SceneFile(const std::string& path);
	
		TileMap* getTileMap();
		PropsMap* getPropsMap();
	};
}