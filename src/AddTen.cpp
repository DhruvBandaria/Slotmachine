#include "AddTen.h"
#include "Level1Scene.h"

AddTen::AddTen()// call super constructor
	:Button(
		"../Assets/textures/AddTenButton.png",
		"addTen",
		ADD_TEN, glm::vec2(450, 590)), m_isClicked(false)
{

}

AddTen::~AddTen()
{
}

bool AddTen::ButtonClick()
{
	m_mouseOver();
	return  true;
}

bool AddTen::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->setBetAmount(10);
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
