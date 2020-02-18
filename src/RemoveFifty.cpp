#include "RemoveFifty.h"
#include "Level1Scene.h"

RemoveFifty::RemoveFifty()
// call super constructor
	:Button(
		"../Assets/textures/RemoveFiftyButton.png",
		"removeFifty",
		REMOVE_FIFTY, glm::vec2(310, 650)), m_isClicked(false)
{

}

RemoveFifty::~RemoveFifty()
{
}

bool RemoveFifty::ButtonClick()
{
	m_mouseOver();
	return true;
}

bool RemoveFifty::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->setRemoveAmount(50);
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
