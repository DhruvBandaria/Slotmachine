#pragma once
#ifndef __ADD_FIVE__
#define __ADD_FIVE__

#include "Button.h"

class Level1Scene;

class AddFive : public Button
{
public:
	AddFive();
	~AddFive();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */