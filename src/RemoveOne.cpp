#include "RemoveOne.h"
#include "Level1Scene.h"

RemoveOne::RemoveOne()
// call super constructor
	:Button(
		"../Assets/textures/RemoveOneButton.png",
		"removeOne",
		REMOVE_ONE, glm::vec2(270, 650)), m_isClicked(false)
{

}

RemoveOne::~RemoveOne()
{
}

bool RemoveOne::ButtonClick()
{
	m_mouseOver();
	return true;
}

bool RemoveOne::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->setRemoveAmount(1);
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
