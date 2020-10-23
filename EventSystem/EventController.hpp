#pragma once

#include <map>
#include <iostream>
#include <functional>

#include <SFML/Graphics.hpp>

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
		static EventMap eventMap;
	public:
		static void registry(
			const EventType& eventType,
			GameObject* gameObject,
			std::function<void(NovaRPG::Event&)> handler
		);

		static void handle(sf::RenderWindow* window);
	};
}