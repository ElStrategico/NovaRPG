#pragma once

#include <UI/Menu.hpp>
#include <UI/Button.hpp>
#include <Core/GameSettings.hpp>

namespace NovaRPG
{
	class LoginMenuFactory
	{
	private:
		static int itemCharacterSize;
	public:
		static Menu* factory();
	};
}