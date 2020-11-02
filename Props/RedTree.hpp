#pragma once

#include <iostream>

#include <Props/Prop.hpp>
#include <EventSystem/EventController.hpp>

namespace NovaRPG
{
	class RedTree : public Prop
	{
	public:
		RedTree();

		virtual void initPropEvents() override;
	};
}