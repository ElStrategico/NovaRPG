#pragma once

#include <string>

#include <Models/Model.hpp>

namespace NovaRPG
{
	class User : public Model
	{
	private:
		std::string name;
	public:
		User(const std::string& name);

		std::string getName();
	};
}