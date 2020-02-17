#pragma once
#ifndef __REMOVE_FIVE__
#define __REMOVE_FIVE__

#include "Button.h"

class Level1Scene;

class RemoveFive : public Button
{
public:
	RemoveFive();
	~RemoveFive();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */