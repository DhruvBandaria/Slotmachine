#pragma once
#ifndef __SLOT_MACHINE__

#define __SLOT_MACHINE__
#include <string>

class SlotMachine
{
public:
	SlotMachine();
	~SlotMachine();
	void resetAll();
	void rest();
	void resetAfterSpin();
	std::string spin();
	void checkJackpot();
	std::string showWinMessage();
	std::string showLossMessage();
	bool checkRange(int value,int lowerBound,int upperBound);
	void reels();
	std::string calculateWin();
	bool addBet(int amount);
	bool removeBet(int amount);
	std::string getBetAmount() { return std::to_string(m_currentBetAmount); }
	std::string getPlayerMoney() { return std::to_string(m_playerMoney); }
	std::string getFirstOutcome() { return betLine[0]; }
	std::string getSecondOutcome() { return betLine[1]; }
	std::string getThirdOutcome() { return betLine[2]; }
private:
	int m_playerMoney;
	int m_currentBetAmount;
	int m_jackpotAmount;
	int m_winnings;
	int m_grapes;
	int m_bananas;
	int m_oranges;
	int m_cherries;
	int m_bars;
	int m_bells;
	int m_sevens;
	int m_blanks;
	int m_totalFruits;
	std::string betLine[3] = { "", "", "" };
	static SlotMachine* s_pSlotmachine;
};



#endif
