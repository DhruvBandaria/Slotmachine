#pragma once
#ifndef __REMOVE_FIFTY__
#define __REMOVE_FIFTY__

#include "Button.h"

class Level1Scene;

class RemoveFifty : public Button
{
public:
	RemoveFifty();
	~RemoveFifty();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */