#pragma once
#ifndef __ADD_ONE__
#define __ADD_ONE__

#include "Button.h"

class Level1Scene;

class AddOne : public Button
{
public:
	AddOne();
	~AddOne();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */