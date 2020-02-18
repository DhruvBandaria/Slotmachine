#include "QuitButton.h"
#include "Game.h"

QuitButton::QuitButton() :Button(
	                          "../Assets/textures/QuitButton.png",
	                          "quitButton",
	                          ADD_FIFTY, glm::vec2(510, 650)), m_isClicked(false)
{
}

QuitButton::~QuitButton()
{
}

bool QuitButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			TheGame::Instance()->quit();
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
