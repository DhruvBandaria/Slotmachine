#pragma once
#ifndef __ALL_OUT__
#define __ALL_OUT__

#include "Button.h"

class Level1Scene;

class AllOut : public Button
{
public:
	AllOut();
	~AllOut();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */