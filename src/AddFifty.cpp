#include "AddFifty.h"
#include "Level1Scene.h"

AddFifty::AddFifty()// call super constructor
	:Button(
		"../Assets/textures/AddFiftyButton.png",
		"addFifty",
		ADD_FIFTY, glm::vec2(310, 590)), m_isClicked(false)
{

}

AddFifty::~AddFifty()
{
}

bool AddFifty::ButtonClick()
{
	m_mouseOver();
	return  true;
}

bool AddFifty::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->setBetAmount(50);
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
