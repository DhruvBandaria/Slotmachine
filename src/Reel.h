#pragma once

#ifndef __REEL__

#define __REEL__

#include "DisplayObject.h"

class Reel : public DisplayObject
{
public:
	Reel();
	~Reel();

	void draw() override;
	void update() override;
	void clean() override;

	void toggleSpin();
private:
	void m_move();
	void m_checkBounds();
	void m_reset();
	bool isSpining;
};

#endif

