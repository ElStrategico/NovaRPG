#include "SceneController.hpp"

NovaRPG::Scene* NovaRPG::SceneController::scene = nullptr;

void NovaRPG::SceneController::init(Scene* newScene)
{
	scene = newScene;
}

void NovaRPG::SceneController::free()
{
	delete scene;
}

NovaRPG::Scene* NovaRPG::SceneController::getCurrent()
{
	return scene;
}

void NovaRPG::SceneController::switchScene(Scene* newScene)
{
	if (scene) delete scene;
	scene = newScene;
}