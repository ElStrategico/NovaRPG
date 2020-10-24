#pragma once

#include <vector>
#include <iostream>

#include <Core/Tag.hpp>
#include <Core/IDrawable.hpp>
#include <Core/ITransformable.hpp>

namespace NovaRPG
{
	class GameObject : public IDrawable, public ITransformable
	{
	private:
		bool active = true;
		std::vector<Tag> tags;
	protected:
		std::string value;
	public:
		virtual ~GameObject();

		void addTag(const std::string& name);
		void addTag(const Tag& tag);

		bool existsTag(const std::string& name);
		std::vector<Tag> getTags();

		virtual std::string getValue();
		virtual void setValue(const std::string& value);
		void appendValue(const std::string& value);

		bool isActive();
		void setActive(bool value);
	};
}