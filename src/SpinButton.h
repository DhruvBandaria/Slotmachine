#pragma once
#ifndef __SPIN_BUTTON__
#define __SPIN_BUTTON__

#include "Button.h"

class Level1Scene;

class SpinButton : public Button
{
public:
	SpinButton();
	~SpinButton();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */