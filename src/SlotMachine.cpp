#include "SlotMachine.h"
#include <cstdlib>
#include <iomanip>
#include <iostream>

SlotMachine::SlotMachine()
{
	m_currentBetAmount = 0;
	m_playerMoney = 1000;
	m_jackpotAmount = 5000;
	m_winnings = 0;
	m_grapes = 0;
	m_bananas = 0;
	m_oranges = 0;
	m_cherries = 0;
	m_bars = 0;
	m_bells = 0;
	m_sevens = 0;
	m_blanks = 0;
	m_totalFruits = 0;
}

SlotMachine::~SlotMachine()
{
	
}

void SlotMachine::resetAll()
{
	m_grapes = 0;
	m_bananas = 0;
	m_oranges = 0;
	m_cherries = 0;
	m_bars = 0;
	m_bells = 0;
	m_sevens = 0;
	m_blanks = 0;
	m_currentBetAmount = 0;
	m_playerMoney = 1000;
	m_jackpotAmount = 5000;
	m_winnings = 0;
}

void SlotMachine::rest()
{
	m_grapes = 0;
	m_bananas = 0;
	m_oranges = 0;
	m_cherries = 0;
	m_bars = 0;
	m_bells = 0;
	m_sevens = 0;
	m_blanks = 0;
	m_winnings = 0;
}

void SlotMachine::resetAfterSpin()
{
	rest();
	m_currentBetAmount = 0;
}

std::string SlotMachine::spin()
{
	if(m_currentBetAmount<=0)
	{
		return "Please select your bet";
	}
	rest();
	reels();
	return calculateWin();
}


bool SlotMachine::checkJackpot()
{
	
}

std::string SlotMachine::showWinMessage()
{
	m_playerMoney = m_playerMoney + m_winnings;
	return "Congratulations you won " + std::to_string(m_winnings);
}

std::string SlotMachine::showLossMessage()
{
	return "you lost";
}

bool SlotMachine::checkRange(int value, int lowerBound, int upperBound)
{
	if (value >= lowerBound && value <= upperBound)
	{
		return true;
	}
	else {
		return false;
	}
}

void SlotMachine::reels()
{
	int outCome[]={0,0,0};
	for (int spin = 0; spin < 3; spin++) {
		outCome[spin] = floor((rand() % 65) + 1);
		if (checkRange(outCome[spin], 1, 27)) {  // 41.5% probability
			betLine[spin] = "blank";
			m_blanks++;
		}
		else if (checkRange(outCome[spin], 28, 37)) {
			betLine[spin] = "Grapes";
			m_grapes++;
		}
		else if (checkRange(outCome[spin], 38, 46)) {
			betLine[spin] = "Banana";
			m_bananas++;
		}
		else if (checkRange(outCome[spin], 47, 54))
		{
			betLine[spin] = "Orange";
			m_oranges++;
		}
		else if (checkRange(outCome[spin], 55, 59)) {
			betLine[spin] = "Cherry";
			m_cherries++;
		}
		else if (checkRange(outCome[spin], 60, 62)) {
			betLine[spin] = "Bar";
			m_bars++;
		}
		else if (checkRange(outCome[spin], 63, 64)) {
			betLine[spin] = "Bell";
			m_bells++;
		}
		else if (checkRange(outCome[spin], 65, 65)) {
			betLine[spin] = "Seven";
			m_sevens++;
		}
	}
}

std::string SlotMachine::calculateWin()
{
	//std::cout << "Outcome:" + betLine[0] + "," + betLine[1] + "," + betLine[2] << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "grapes:" << m_grapes << std::endl;
	std::cout << "bananas:" << m_bananas << std::endl;
	std::cout << "oranges:" << m_oranges << std::endl;
	std::cout << "cherries:" << m_cherries << std::endl;
	std::cout << "bars:" << m_bars << std::endl;
	std::cout << "bells:" << m_bells << std::endl;
	std::cout << "sevens:" << m_sevens << std::endl;
	std::cout << "blanks:" << m_blanks << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::string message = "";
	if (m_blanks == 0)
	{
		if (m_grapes == 3) {
			m_winnings = m_currentBetAmount * 10;
		}
		else if (m_bananas == 3) {
			m_winnings = m_currentBetAmount * 20;
		}
		else if (m_oranges == 3) {
			m_winnings = m_currentBetAmount * 30;
		}
		else if (m_cherries == 3) {
			m_winnings = m_currentBetAmount * 40;
		}
		else if (m_bars == 3) {
			m_winnings = m_currentBetAmount * 50;
		}
		else if (m_bells == 3) {
			m_winnings = m_currentBetAmount * 75;
		}
		else if (m_sevens == 3) {
			m_winnings = m_currentBetAmount * 100;
		}
		else if (m_grapes == 2) {
			m_winnings = m_currentBetAmount * 2;
		}
		else if (m_bananas == 2) {
			m_winnings = m_currentBetAmount * 2;
		}
		else if (m_oranges == 2) {
			m_winnings = m_currentBetAmount * 3;
		}
		else if (m_cherries == 2) {
			m_winnings = m_currentBetAmount * 4;
		}
		else if (m_bars == 2) {
			m_winnings = m_currentBetAmount * 5;
		}
		else if (m_bells == 2) {
			m_winnings = m_currentBetAmount * 10;
		}
		else if (m_sevens == 2) {
			m_winnings = m_currentBetAmount * 20;
		}
		else if (m_sevens == 1) {
			m_winnings = m_currentBetAmount * 5;
		}
		else {
			m_winnings = m_currentBetAmount * 1;
		}
		message=showWinMessage();
	}
	else
	{
		message=showLossMessage();
	}
	return message;
}

bool SlotMachine::addBet(int amount)
{
	if (amount == -1)
	{
		m_currentBetAmount = m_currentBetAmount + m_playerMoney;
		m_playerMoney = 0;
		return true;
	}
	if(amount>m_playerMoney)
	{
		return false;
	}
	else
	{
		m_currentBetAmount += amount;
		m_playerMoney -= amount;
		return  true;
	}
}

bool SlotMachine::removeBet(int amount)
{
	if (amount == -1)
	{
		m_playerMoney = m_currentBetAmount + m_playerMoney;
		m_currentBetAmount = 0;
		return true;
	}
	if (amount > m_currentBetAmount)
	{
		return false;
	}
	else
	{
		m_currentBetAmount -= amount;
		m_playerMoney += amount;
		return  true;
	}
}
