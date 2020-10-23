#pragma once

#include <iostream>

#include <Core/ITransformable.hpp>

namespace NovaRPG
{
	class GameObject : public ITransformable
	{
	private:
		bool active = true;
	public:
		virtual ~GameObject();

		bool isActive();
		void setActive(bool value);
	};
}