#include "RedTree.hpp"

NovaRPG::RedTree::RedTree() : Prop("Assets/Props/RedTree.png")
{

}

void NovaRPG::RedTree::initPropEvents()
{
	EventController::registry(EventType::ON_CLICK, this, [](Event& event) {
		std::cout << "Red tree" << std::endl;
	});
}
