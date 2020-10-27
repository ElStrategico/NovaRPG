#include "Auth.hpp"

bool NovaRPG::Auth::isUser()
{
    return true;
}

NovaRPG::User NovaRPG::Auth::user()
{
    sf::Http::Request request("/api/v1/auth/me", sf::Http::Request::Get);
    sf::Http::Response response = HTTPClient::sendWithApplicationJSON(request);

    std::string name = response.getBody();

    return User(name);
}

std::string NovaRPG::Auth::getName()
{
    sf::Http::Request request("/api/v1/auth/me", sf::Http::Request::Get);
    sf::Http::Response response = HTTPClient::sendWithApplicationJSON(request);

    return response.getBody();
}
