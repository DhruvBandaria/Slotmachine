#include "AddFive.h"
#include "Level1Scene.h"

AddFive::AddFive()// call super constructor
	:Button(
		"../Assets/textures/AddFiveButton.png",
		"addFive",
		ADD_FIVE, glm::vec2(390, 590)), m_isClicked(false)
{

}

AddFive::~AddFive()
{
}

bool AddFive::ButtonClick()
{
	m_mouseOver();
	return  true;
}

bool AddFive::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->setBetAmount(5);
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
