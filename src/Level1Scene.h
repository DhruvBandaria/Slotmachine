#pragma once
#ifndef __LEVEL_1_SCENE__
#define __LEVEL_1_SCENE__

#include "Scene.h"
#include "Plane.h"
#include "Island.h"
#include "Heading.h"
#include "MiddleSection.h"
#include "ButtonHolder.h"
#include "Button.h"
#include "AddOne.h"
#include "AddTwo.h"
#include "AddFifty.h"
#include "AddTen.h"
#include "AddFive.h"
#include "AllIn.h"
#include "RemoveOne.h"
#include "RemoveFifty.h"
#include "RemoveTen.h"
#include "RemoveFive.h"
#include "RemoveTwo.h"
#include "AllOut.h"
#include "ResetButton.h"
#include "SpinButton.h"
#include "Reel.h"
#include "Label.h"
#include "SlotMachine.h"

class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;

	void setBetAmount(int amount);
	void setRemoveAmount(int amount);
	void restStats();
	void spin();
	void showReelSpin();
	// getters
	glm::vec2 getMousePosition();

private:
	//Soltmachine Logic
	SlotMachine* m_slotMachine;
	
	// game objects
	Heading* m_pHeading;
	MiddleSection* m_pMiddleSection;
	ButtonHolder* m_pButtonHolder;
	
	AddOne* m_pAddOne;
	AddTwo* m_pAddTwo;
	AddFive* m_pAddFive;
	AddTen* m_pAddTen;
	AddFifty* m_pAddFifty;
	AllIN* m_pAllIn;

	RemoveOne* m_pRemoveOne;
	RemoveTwo* m_pRemoveTwo;
	RemoveFive* m_pRemoveFive;
	RemoveTen* m_pRemoveTen;
	RemoveFifty* m_pRemoveFifty;
	AllOut* m_pAllOut;

	SpinButton* m_pSpinButton;
	RestButton* m_pRestButton;

	Reel* m_pReel1;
	Reel* m_pReel2;
	Reel* m_pReel3;

	Label* m_pCurrentBalance;
	Label* m_pBetAmount;
	Label* m_pJackpotAmount;
	Label* m_pLog;
	
	
	//Button* m_pAddOneButton;
	// private data member
	glm::vec2 m_mousePosition;
	
	
};

#endif /* defined (__LEVEL_1_SCENE__) */
