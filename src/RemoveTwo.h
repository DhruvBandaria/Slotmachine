#pragma once
#ifndef __REMOVE_TWO__
#define __REMOVE_TWO__

#include "Button.h"

class Level1Scene;

class RemoveTwo : public Button
{
public:
	RemoveTwo();
	~RemoveTwo();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */