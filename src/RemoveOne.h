#pragma once
#ifndef __REMOVE_ONE__
#define __REMOVE_ONE__

#include "Button.h"

class Level1Scene;

class RemoveOne : public Button
{
public:
	RemoveOne();
	~RemoveOne();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */