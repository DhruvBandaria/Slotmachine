#include "MiddleSection.h"
#include "Config.h"
#include "Game.h"

MiddleSection::MiddleSection()
{
	TheTextureManager::Instance()->load("../Assets/textures/Slotmachine_Body.png",
		"middle", TheGame::Instance()->getRenderer());

	// measure size by querying the texture
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("middle");
	setWidth(size.x);
	setHeight(size.y);

	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5f, 370.0f));
	setType(GameObjectType::MIDDLE);
}

MiddleSection::~MiddleSection()
{
}

void MiddleSection::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("middle", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void MiddleSection::update()
{
}

void MiddleSection::clean()
{
}
