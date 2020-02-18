#include "AllOut.h"
#include "Level1Scene.h"

AllOut::AllOut()
// call super constructor
	:Button(
		"../Assets/textures/AllOutButton.png",
		"allOut",
		ALL_OUT, glm::vec2(370, 650)), m_isClicked(false)
{

}

AllOut::~AllOut()
{
}

bool AllOut::ButtonClick()
{
	m_mouseOver();
	return true;
}

bool AllOut::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->setRemoveAmount(-1);
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
