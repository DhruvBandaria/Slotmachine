#pragma once
#ifndef __ADD_TEN__
#define __ADD_TEN__

#include "Button.h"

class Level1Scene;

class AddTen : public Button
{
public:
	AddTen();
	~AddTen();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */