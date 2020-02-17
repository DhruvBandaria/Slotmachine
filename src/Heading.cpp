#include "Heading.h"
#include "TextureManager.h"
#include "Game.h"

Heading::Heading()
{
	TheTextureManager::Instance()->load("../Assets/textures/Slot_Machine_Headder.png",
		"header", TheGame::Instance()->getRenderer());

	// measure size by querying the texture
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("header");
	setWidth(size.x);
	setHeight(size.y);

	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5f , 100.0f));
	setType(GameObjectType::HEADING);
}

Heading::~Heading()
{
}

void Heading::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("header", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Heading::update()
{
}

void Heading::clean()
{
}
