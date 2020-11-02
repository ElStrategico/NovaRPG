#include "SceneFile.hpp"

NovaRPG::SceneFile::SceneFile(const std::string& path)
{
	sceneFile.LoadFile(path.c_str());
}

NovaRPG::TileMap* NovaRPG::SceneFile::getTileMap()
{
	if (!tileMap)
	{
		TileAssociation tileAccociation;

		TiXmlElement* tileMapElement = sceneFile.FirstChildElement()->
												 FirstChildElement("TileMap");
		TiXmlElement* tilesElement = sceneFile.FirstChildElement()->
											   FirstChildElement("Tiles");

		TiXmlElement* tileElement = tilesElement->FirstChildElement();
		while (tileElement)
		{
			char key = tileElement->Attribute("key")[0];
			std::string path = tileElement->Attribute("path");

			tileAccociation.add(key, path);

			tileElement = tileElement->NextSiblingElement();
		}

		tileMap = new TileMap(tileMapElement->GetText(), tileAccociation);
	}

	return tileMap;
}

NovaRPG::PropsMap* NovaRPG::SceneFile::getPropsMap()
{
	if (!propsMap)
	{
		Prop* prop = nullptr;
		propsMap = new PropsMap();
		TileMap* tileMap = getTileMap();

		TiXmlElement* propsElement = sceneFile.FirstChildElement()->
											   FirstChildElement("Props");

		TiXmlElement* propElement = propsElement->FirstChildElement();

		while (propElement)
		{
			std::string name = propElement->Attribute("name");
			int index = std::stoi(propElement->Attribute("index"));
			bool eventable = std::stoi(propElement->Attribute("eventable"));

			prop = PropController::instantiatePropByName(name, eventable);

			if (prop)
			{
				sf::Vector2f position = tileMap->getTile(index)->getPosition();
				prop->setPosition(position);
				propsMap->addProp(prop);
			}

			propElement = propElement->NextSiblingElement();
		}
	}

	return propsMap;
}
