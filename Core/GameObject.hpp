#pragma once

#include <Core/ITransformable.hpp>

namespace NovaRPG
{
	class GameObject : public ITransformable
	{
	private:
		bool active = true;
	public:
		bool isActive();
		void setActive(bool value);
	};
}