#include "ResetButton.h"
#include "Level1Scene.h"

RestButton::RestButton()
	:Button(
		"../Assets/textures/RestButton.png",
		"restButton",
		ADD_FIFTY, glm::vec2(680, 650)), m_isClicked(false)
{

}

RestButton::~RestButton()
{
}

bool RestButton::ButtonClick()
{
	m_mouseOver();
	return  true;
}

bool RestButton::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->restStats();
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
