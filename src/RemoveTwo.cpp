#include "RemoveTwo.h"
#include "Level1Scene.h"

RemoveTwo::RemoveTwo()
// call super constructor
	:Button(
		"../Assets/textures/RemoveTwoButton.png",
		"removeTwo",
		REMOVE_TWO, glm::vec2(130, 650)), m_isClicked(false)
{

}

RemoveTwo::~RemoveTwo()
{
}

bool RemoveTwo::ButtonClick()
{
	m_mouseOver();
	return true;
}

bool RemoveTwo::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->setRemoveAmount(2);
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
