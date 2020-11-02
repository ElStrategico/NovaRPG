#pragma once

#include <iostream>

#include <Props/Prop.hpp>
#include <EventSystem/EventController.hpp>

namespace NovaRPG
{
	class WoodenHouse : public Prop
	{
	public:
		WoodenHouse();

		virtual void initPropEvents() override;
	};
}