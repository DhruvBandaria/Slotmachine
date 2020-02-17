#pragma once
#ifndef __ADD_TWO__
#define __ADD_TWO__

#include "Button.h"

class Level1Scene;

class AddTwo : public Button
{
public:
	AddTwo();
	~AddTwo();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */