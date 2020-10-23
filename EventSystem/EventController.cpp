#include "EventController.hpp"

NovaRPG::EventMap NovaRPG::EventController::eventMap = {};

void NovaRPG::EventController::registry(
	const EventType& eventType, 
	GameObject* gameObject, 
	std::function<void(NovaRPG::Event&)> handler
)
{
	if (eventMap.find(eventType) == eventMap.end())
	{
		eventMap[eventType] = std::map<GameObject*, std::function<void(NovaRPG::Event&)>>();
	}
	eventMap[eventType][gameObject] = handler;
}

void NovaRPG::EventController::handle(sf::RenderWindow* window)
{
	sf::Event event;
	NovaRPG::Event clientEvent(window);

	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window->close();
		}
		if (event.type == sf::Event::MouseButtonPressed)
		{
			if (event.mouseButton.button == sf::Mouse::Left)
			{
				for (auto handler : eventMap[EventType::ON_CLICK])
				{
					if (Geometry::pointInGameObject(event.mouseButton.x, event.mouseButton.y, handler.first))
					{
						clientEvent.target = handler.first;
						handler.second(clientEvent);
					}
				}
			}
		}
	}
}