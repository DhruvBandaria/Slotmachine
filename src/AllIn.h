#pragma once
#ifndef __ALL_IN__
#define __ALL_IN__

#include "Button.h"

class Level1Scene;

class AllIN : public Button
{
public:
	AllIN();
	~AllIN();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */