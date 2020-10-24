#include "Menu.hpp"

NovaRPG::Menu::Menu(
	const std::vector<Element*> items, 
	const sf::Vector2f& position,
	float interval
) 
: items(items), interval(interval)
{
	setPosition(position);
}

NovaRPG::Menu::~Menu()
{
	for (auto item : items)
	{
		if (item) delete item;
	}
}

NovaRPG::GameObject* NovaRPG::Menu::findChildByTag(const std::string& tag)
{
	for (auto& item : items)
	{
		if (item->existsTag(tag))
		{
			return item;
		}
	}

	return nullptr;
}

void NovaRPG::Menu::normalizeByPosition(sf::Vector2f position)
{
	for (auto item : items)
	{
		item->setPosition(position);
		position.y += item->getSize().height + interval;
	}
}

sf::FloatRect NovaRPG::Menu::getSize()
{
	sf::FloatRect rect;
	
	rect.width = items.front()->getSize().width;
	for (auto item : items)
	{
		rect.height += item->getSize().height;
	}

	return rect;
}

void NovaRPG::Menu::setSize(const sf::Vector2f& size)
{
	//TODO: Implement
}

sf::Vector2f NovaRPG::Menu::getPosition()
{
	return items.front()->getPosition();
}

void NovaRPG::Menu::move(const sf::Vector2f& position)
{
	for (auto item : items)
	{
		item->move(position);
	}
}

void NovaRPG::Menu::setPosition(const sf::Vector2f& position)
{
	normalizeByPosition(position);
}

void NovaRPG::Menu::draw(sf::RenderWindow* window)
{
	for (auto item : items)
	{
		item->draw(window);
	}
}