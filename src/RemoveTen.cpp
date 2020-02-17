#include "RemoveTen.h"
#include "Level1Scene.h"

RemoveTen::RemoveTen()
// call super constructor
	:Button(
		"../Assets/textures/RemoveTenButton.png",
		"removeTen",
		REMOVE_TEN, glm::vec2(450, 650)), m_isClicked(false)
{

}

RemoveTen::~RemoveTen()
{
}

bool RemoveTen::ButtonClick()
{
	m_mouseOver();
	return true;
}

bool RemoveTen::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->setRemoveAmount(10);
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
