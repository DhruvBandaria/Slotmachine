#pragma once

#ifndef __HEADING__

#define __HEADING__

#include "DisplayObject.h"

class Heading : public DisplayObject
{
public:
	Heading();
	~Heading();
	
	void draw() override;
	void update() override;
	void clean() override;
	
};

#endif

