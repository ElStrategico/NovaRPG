#pragma once

#include <SFML/Network.hpp>

#include <Core/GameSettings.hpp>

namespace NovaRPG
{
	class HTTPClient
	{
	private:
		static sf::Http* http;
	public:
		static sf::Http* get();

		static sf::Http::Response send(sf::Http::Request& request);
		static sf::Http::Response sendWithApplicationJSON(sf::Http::Request& request);
	};
}