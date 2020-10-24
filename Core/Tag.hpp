#pragma once

#include <string>

namespace NovaRPG
{
	class Tag
	{
	private:
		std::string name;
	public:
		Tag(const std::string& name);

		std::string getName();
	};
}