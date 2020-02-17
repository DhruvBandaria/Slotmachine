#include "Reel.h"
#include "Config.h"
#include "TextureManager.h"
#include "Game.h"

Reel::Reel()
{
	TheTextureManager::Instance()->load("../Assets/textures/FullStripe.png",
		"reel", TheGame::Instance()->getRenderer());

	// measure size by querying the texture
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("reel");
	setWidth(size.x);
	setHeight(size.y);

	setPosition(glm::vec2(330.0f, 705));
	setVelocity(glm::vec2(0, 20));
	setType(GameObjectType::REEL);
	isSpining = false;
}

Reel::~Reel()
{
}

void Reel::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("reel", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Reel::update()
{
	m_move();
	m_checkBounds();
}

void Reel::clean()
{
}

void Reel::toggleSpin()
{
	if(isSpining)
	{
		isSpining = false;
	}
	else
	{
		isSpining = true;
	}
}

void Reel::m_move()
{
	if (isSpining) {
		setPosition(getPosition() + getVelocity());
	}
}

void Reel::m_checkBounds()
{
	if(getPosition().y >= 705 && isSpining)
	{
		m_reset();
	}
}

void Reel::m_reset()
{
	setPosition(glm::vec2(getPosition().x, -15));
}
