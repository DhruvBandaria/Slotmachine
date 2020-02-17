#pragma once

#ifndef __MIDDLESECTION__

#define __MIDDLESECTION__

#include "DisplayObject.h"

class MiddleSection : public DisplayObject
{
public:
	MiddleSection();
	~MiddleSection();

	void draw() override;
	void update() override;
	void clean() override;

};

#endif

