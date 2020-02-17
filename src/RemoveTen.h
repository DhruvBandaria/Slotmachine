#pragma once
#ifndef __REMOVE_TEN__
#define __REMOVE_TEN__

#include "Button.h"

class Level1Scene;

class RemoveTen : public Button
{
public:
	RemoveTen();
	~RemoveTen();


	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */