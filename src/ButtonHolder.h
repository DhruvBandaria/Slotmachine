#pragma once

#ifndef __BUTTONHOLDER__
#define __BUTTONHOLDER__

#include "DisplayObject.h"

class ButtonHolder : public DisplayObject
{
public:
	ButtonHolder();
	~ButtonHolder();

	void draw() override;
	void update() override;
	void clean() override;

};

#endif

