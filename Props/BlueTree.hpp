#pragma once

#include <iostream>

#include <Props/Prop.hpp>
#include <EventSystem/EventController.hpp>

namespace NovaRPG
{
	class BlueTree : public Prop
	{
	public:
		BlueTree();

		virtual void initPropEvents() override;
	};
}