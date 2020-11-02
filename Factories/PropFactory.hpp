#pragma once

#include <Props/Includes.hpp>

namespace NovaRPG
{
	class PropFactory
	{
	public:
		static Prop* factoryRedTree(bool eventable = false);
		static Prop* factoryBlueTree(bool eventable = false);
		static Prop* factoryWoodenHouse(bool eventable = false);
	};
}