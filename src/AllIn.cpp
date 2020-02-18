#include "AllIn.h"
#include "Level1Scene.h"

AllIN::AllIN()// call super constructor
	:Button(
		"../Assets/textures/AllInButton.png",
		"allIn",
		ALL_IN, glm::vec2(370, 590)), m_isClicked(false)
{

}

AllIN::~AllIN()
{
}

bool AllIN::ButtonClick()
{
	m_mouseOver();
	return  true;
}

bool AllIN::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->setBetAmount(-1);
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
