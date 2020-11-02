#include "PropFactory.hpp"

NovaRPG::Prop* NovaRPG::PropFactory::factoryRedTree(bool eventable)
{
    Prop* prop = new RedTree();
    if (eventable) prop->initPropEvents();

    return prop;
}

NovaRPG::Prop* NovaRPG::PropFactory::factoryBlueTree(bool eventable)
{
    Prop* prop = new BlueTree();
    if (eventable) prop->initPropEvents();

    return prop;
}

NovaRPG::Prop* NovaRPG::PropFactory::factoryWoodenHouse(bool eventable)
{
    Prop* prop = new WoodenHouse();
    if (eventable) prop->initPropEvents();

    return prop;
}
