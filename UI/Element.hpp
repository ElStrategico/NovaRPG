#pragma once

#include <SFML/Graphics.hpp>

#include <Core/IDrawable.hpp>
#include <Core/GameObject.hpp>

namespace NovaRPG
{
	class Element : public GameObject, public IDrawable
	{

	};
}