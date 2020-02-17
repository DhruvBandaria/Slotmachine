#include "ButtonHolder.h"
#include "TextureManager.h"
#include "Game.h"

ButtonHolder::ButtonHolder()
{
	TheTextureManager::Instance()->load("../Assets/textures/Buttons.png",
		"buttonholder", TheGame::Instance()->getRenderer());

	// measure size by querying the texture
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("buttonholder");
	setWidth(size.x);
	setHeight(size.y);

	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5f, 620.0f));
	setType(GameObjectType::BUTTON_HOLDER);
}

ButtonHolder::~ButtonHolder()
{
}

void ButtonHolder::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("buttonholder", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void ButtonHolder::update()
{
}

void ButtonHolder::clean()
{
}
