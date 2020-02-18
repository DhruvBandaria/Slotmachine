#include "AddOne.h"

#include "Game.h"
#include "SlotMachine.h"

AddOne::AddOne()
// call super constructor
	:Button(
		"../Assets/textures/AddOneButton.png",
		"addOne",
		ADD_ONE, glm::vec2(70, 590)), m_isClicked(false)
{

}

AddOne::~AddOne()
{
}

bool AddOne::ButtonClick()
{
	m_mouseOver();
	return true;
}

bool AddOne::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->setBetAmount(1);
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}
	return  false;
}


