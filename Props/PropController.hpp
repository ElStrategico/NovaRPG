#pragma once

#include <map>

#include <Props/Includes.hpp>
#include <Factories/PropFactory.hpp>

namespace NovaRPG
{
	class PropController
	{
	private:
		static std::map<std::string, NovaRPG::Prop*(*)(bool)> props;
	public:
		static Prop* instantiatePropByName(const std::string& name, bool eventable = false);
	};
}