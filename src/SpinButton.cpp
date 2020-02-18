#include "SpinButton.h"
#include "Level1Scene.h"

SpinButton::SpinButton()
	:Button(
		"../Assets/textures/SpinButton.png",
		"spinButton",
		ADD_FIFTY, glm::vec2(480, 590)), m_isClicked(false)
{

}
SpinButton::~SpinButton()
{
}

bool SpinButton::ButtonClick()
{
	//m_mouseOver();
	if(m_mouseOver() && m_mouseButtonClicked)
	{
		if(!m_isClicked)
		{
			std::cout << "Spin Clicked"<< std::endl;
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

bool SpinButton::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->spin();
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
