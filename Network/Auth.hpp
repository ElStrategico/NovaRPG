#pragma once

#include <iostream>

#include <Models/User.hpp>
#include <Network/HTTPClient.hpp>

namespace NovaRPG
{
	class Auth
	{
	public:
		static bool isUser();
		static User user();
		static std::string getName();
	};
}