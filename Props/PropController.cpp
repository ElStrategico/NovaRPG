#include "PropController.hpp"

std::map<std::string, NovaRPG::Prop*(*)(bool)> NovaRPG::PropController::props = {
    {"RedTree", NovaRPG::PropFactory::factoryRedTree},
    {"BlueTree", NovaRPG::PropFactory::factoryBlueTree},
    {"WoodenHouse", NovaRPG::PropFactory::factoryWoodenHouse}
};

NovaRPG::Prop* NovaRPG::PropController::instantiatePropByName(const std::string& name, bool eventable)
{
    return props[name](eventable);
}
