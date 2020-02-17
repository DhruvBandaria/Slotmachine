#pragma once
#ifndef __REST_BUTTON__
#define __REST_BUTTON__

#include "Button.h"

class Level1Scene;

class RestButton : public Button
{
public:
	RestButton();
	~RestButton();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */