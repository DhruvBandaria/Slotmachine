#pragma once
#ifndef __ADD_FIFTY__
#define __ADD_FIFTY__

#include "Button.h"
#include "AddOne.h"

class AddFifty : public Button
{
public:
	AddFifty();
	~AddFifty();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */