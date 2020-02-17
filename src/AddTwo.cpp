#include "AddTwo.h"
#include "Level1Scene.h"

AddTwo::AddTwo()// call super constructor
	:Button(
		"../Assets/textures/AddTwoButton.png",
		"addTwo",
		ADD_TWO, glm::vec2(330, 590)), m_isClicked(false)
{

}

AddTwo::~AddTwo()
{
}

bool AddTwo::ButtonClick()
{
	m_mouseOver();
	return  true;
}

bool AddTwo::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->setBetAmount(2);
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
