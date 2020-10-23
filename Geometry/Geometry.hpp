#pragma once

#include <Core/GameObject.hpp>

namespace NovaRPG
{
	class Geometry
	{
	public:
		static bool pointInGameObject(
			float xPositionPoint,
			float yPositionPoint,
			GameObject* gameObject
		);

		static bool pointInGameObject(
			const sf::Vector2f& point,
			GameObject* gameObject
		);
	};
}