#pragma once

#include <string>

namespace NovaRPG
{
	class StringHelper
	{
	public:
		static std::string replaceAll(
			const std::string& replaceable,
			char replacement
		);
	};
}