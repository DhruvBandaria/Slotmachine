#include "RemoveFive.h"
#include "Level1Scene.h"

RemoveFive::RemoveFive()
// call super constructor
	:Button(
		"../Assets/textures/RemoveFiveButton.png",
		"removeFive",
		REMOVE_FIVE, glm::vec2(190, 650)), m_isClicked(false)
{

}

RemoveFive::~RemoveFive()
{
}

bool RemoveFive::ButtonClick()
{
	m_mouseOver();
	return true;
}

bool RemoveFive::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->setRemoveAmount(5);
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
