#pragma once

#include <vector>

#include <Props/Includes.hpp>
#include <Core/IDrawable.hpp>

namespace NovaRPG
{
	class PropsMap : public IDrawable
	{
	private:
		std::vector<Prop*> props;
	public:
		~PropsMap();

		void addProp(Prop* prop);

		virtual void draw(sf::RenderWindow* window) override;
	};
}