#include "EventController.hpp"

sf::Event NovaRPG::EventController::coreEvent;
NovaRPG::Event NovaRPG::EventController::clientEvent = NovaRPG::Event();

NovaRPG::EventMap NovaRPG::EventController::eventMap = {};

NovaRPG::TextBox* NovaRPG::EventController::currentEditable = nullptr;

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

void NovaRPG::EventController::deleteForGameObject(GameObject* gameObject)
{
	for (auto &event : eventMap)
	{
		for (auto &handler : event.second)
		{
			if (handler.first == gameObject)
			{
				std::cout << "Delete event handler for game object - " << gameObject << std::endl;
				event.second.erase(gameObject);
			}
		}
	}
}

void NovaRPG::EventController::handleKeyEvent(sf::RenderWindow* window)
{
	if (currentEditable)
	{
		if (coreEvent.key.code == sf::Keyboard::BackSpace)
		{
			currentEditable->eraseLast();
		}
	}
}

void NovaRPG::EventController::handleMouseEvent(sf::RenderWindow* window)
{
	if (coreEvent.mouseButton.button == sf::Mouse::Left)
	{
		for (auto& handler : eventMap[EventType::ON_CLICK])
		{
			std::cout << "Event handler for game object - " << handler.first << std::endl;

			if (Geometry::pointInGameObject(coreEvent.mouseButton.x, coreEvent.mouseButton.y, handler.first))
			{
				clientEvent.target = handler.first;
				handler.second(clientEvent);
				return;
			}
		}
	}
}

void NovaRPG::EventController::handleTextEnteredEvent(sf::RenderWindow* window)
{
	if (currentEditable)
	{
		if (coreEvent.text.unicode == 8) return;

		currentEditable->appendValue(coreEvent.text.unicode);
	}
}

void NovaRPG::EventController::handle(sf::RenderWindow* window)
{
	clientEvent.window = window;

	while (window->pollEvent(coreEvent))
	{
		if (coreEvent.type == sf::Event::Closed)
		{
			window->close();
		}

		if (coreEvent.type == sf::Event::KeyPressed)
		{
			handleKeyEvent(window);
		}
		if (coreEvent.type == sf::Event::MouseButtonPressed)
		{
			handleMouseEvent(window);
		}
		if (coreEvent.type == sf::Event::TextEntered)
		{
			handleTextEnteredEvent(window);
		}
	}
}