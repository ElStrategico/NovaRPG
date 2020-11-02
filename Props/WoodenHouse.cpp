#include "WoodenHouse.hpp"

NovaRPG::WoodenHouse::WoodenHouse() : Prop("Assets/Props/WoodenHouse.png")
{

}

void NovaRPG::WoodenHouse::initPropEvents()
{
	EventController::registry(EventType::ON_CLICK, this, [](Event& event) {
		std::cout << "Wooden house" << std::endl;
	});
}
