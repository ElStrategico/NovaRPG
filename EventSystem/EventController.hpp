#pragma once

#include <map>
#include <iostream>
#include <functional>

#include <SFML/Graphics.hpp>

#include <UI/TextBox.hpp>
#include <Core/GameObject.hpp>
#include <Geometry/Geometry.hpp>
#include <EventSystem/Event.hpp>
#include <EventSystem/EventType.hpp>

namespace NovaRPG
{
	using EventMap = std::map<EventType, std::map<GameObject*, std::function<void(NovaRPG::Event&)>>>;

	class EventController
	{
	private:
		static sf::Event coreEvent;
		static NovaRPG::Event clientEvent;

		static EventMap eventMap;
		
		static void handleKeyEvent(sf::RenderWindow* window);
		static void handleMouseEvent(sf::RenderWindow* window);
		static void handleTextEnteredEvent(sf::RenderWindow* window);
	public:
		static TextBox* currentEditable;

		static void registry(
			const EventType& eventType,
			GameObject* gameObject,
			std::function<void(NovaRPG::Event&)> handler
		);
		
		static void deleteForGameObject(GameObject* gameObject);

		static void handle(sf::RenderWindow* window);
	};
}