#pragma once

#include <Scenes/Scene.hpp>

namespace NovaRPG
{
	class SceneController
	{
	private:
		static Scene* scene;
	public:
		static void init(Scene* newScene);
		static void free();

		static Scene* getCurrent();
		static void switchScene(Scene* newScene);
	};
}