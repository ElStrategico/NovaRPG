#include "Geometry.hpp"

bool NovaRPG::Geometry::pointInGameObject(float xPositionPoint, float yPositionPoint, GameObject* gameObject)
{
    sf::Vector2f point(xPositionPoint, yPositionPoint);

    return pointInGameObject(point, gameObject);
}

bool NovaRPG::Geometry::pointInGameObject(const sf::Vector2f& point, GameObject* gameObject)
{
    sf::Vector2f position = gameObject->getPosition();
    sf::FloatRect size = gameObject->getSize();

    return (point.x >= position.x && point.x <= position.x + size.width) && 
           (point.y >= position.y && point.y <= position.y + size.height);
}
