#include "HTTPClient.hpp"

sf::Http* NovaRPG::HTTPClient::http = nullptr;

sf::Http* NovaRPG::HTTPClient::get()
{
	if (http == nullptr)
	{
		http = new sf::Http(GameSettings::getHost());
	}

	return http;
}

sf::Http::Response NovaRPG::HTTPClient::send(sf::Http::Request& request)
{
	return get()->sendRequest(request);
}

sf::Http::Response NovaRPG::HTTPClient::sendWithApplicationJSON(sf::Http::Request& request)
{
	request.setField("Content-Type", "application/json");
	return send(request);
}
