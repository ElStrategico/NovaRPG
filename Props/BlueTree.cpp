#include "BlueTree.hpp"

NovaRPG::BlueTree::BlueTree() : Prop("Assets/Props/BlueTree.png")
{

}

void NovaRPG::BlueTree::initPropEvents()
{
	EventController::registry(EventType::ON_CLICK, this, [](Event& event) {
		std::cout << "Blue tree" << std::endl;
	});
}