#include "Level1Scene.h"
#include "Game.h"
#include "Heading.h"
#include <iostream>

Level1Scene::Level1Scene()
{
	start();
}

Level1Scene::~Level1Scene()
{
}

void Level1Scene::draw()
{
	m_pReel1->draw();
	m_pReel2->draw();
	m_pReel3->draw();
	
	m_pHeading->draw();
	m_pMiddleSection->draw();
	m_pButtonHolder->draw();
	m_pAddOne->draw();
	m_pAddTwo->draw();
	m_pAddFive->draw();
	m_pAddTen->draw();
	m_pAddFifty->draw();
	m_pAllIn->draw();

	m_pRemoveOne->draw();
	m_pRemoveTwo->draw();
	m_pRemoveFive->draw();
	m_pRemoveTen->draw();
	m_pRemoveFifty->draw();
	m_pAllOut->draw();

	m_pSpinButton->draw();
	m_pRestButton->draw();

	m_pBetAmount->draw();
	m_pCurrentBalance->draw();
	m_pLog->draw();
}

void Level1Scene::update()
{
	m_pReel1->update();
	m_pReel2->setVelocity(glm::vec2(0, 15));
	m_pReel3->setVelocity(glm::vec2(0, 20));
	m_pReel2->update();
	m_pReel3->update();
	m_pReel2->setPosition(glm::vec2(500, m_pReel2->getPosition().y));
	m_pReel3->setPosition(glm::vec2(670, m_pReel3->getPosition().y));

	if(isSpining)
	{
		if(!isCUrrentlySpining)
		{
			i = TheGame::Instance()->getFrames();
			counter = i + 250;
			isCUrrentlySpining = true;
			m_pReel1->toggleSpin();
			m_pReel2->toggleSpin();
			m_pReel3->toggleSpin();
		}
		if(isCUrrentlySpining)
		{
			std::cout << "I:" << i << "  Counter:" << counter << std::endl;
			if(i>counter)
			{
				std::string temp = m_slotMachine->getFirstOutcome();
				if (temp == "blank")
				{
					m_pReel1->setPosition(glm::vec2(m_pReel1->getPosition().x, -20));
					m_pReel1->toggleSpin();
				}
				else if (temp == "Grapes")
				{
					m_pReel1->setPosition(glm::vec2(m_pReel1->getPosition().x, 715));
					m_pReel1->toggleSpin();
				}
				else if (temp == "Banana")
				{
					m_pReel1->setPosition(glm::vec2(m_pReel1->getPosition().x, 615));
					m_pReel1->toggleSpin();
				}
				else if (temp == "Orange")
				{
					m_pReel1->setPosition(glm::vec2(m_pReel1->getPosition().x, 515));
					m_pReel1->toggleSpin();
				}
				else if (temp == "Cherry")
				{
					m_pReel1->setPosition(glm::vec2(m_pReel1->getPosition().x, 415));
					m_pReel1->toggleSpin();
				}
				else if (temp == "Bar")
				{
					m_pReel1->setPosition(glm::vec2(m_pReel1->getPosition().x, 305));
					m_pReel1->toggleSpin();
				}
				else if (temp == "Bell")
				{
					m_pReel1->setPosition(glm::vec2(m_pReel1->getPosition().x, 190));
					m_pReel1->toggleSpin();
				}
				else if (temp == "Seven")
				{
					m_pReel1->setPosition(glm::vec2(m_pReel1->getPosition().x, 85));
					m_pReel1->toggleSpin();
				}


				temp = m_slotMachine->getSecondOutcome();
				if (temp == "blank")
				{
					m_pReel2->setPosition(glm::vec2(m_pReel1->getPosition().x, -20));
					m_pReel2->toggleSpin();
				}
				else if (temp == "Grapes")
				{
					m_pReel2->setPosition(glm::vec2(m_pReel1->getPosition().x, 715));
					m_pReel2->toggleSpin();
				}
				else if (temp == "Banana")
				{
					m_pReel2->setPosition(glm::vec2(m_pReel1->getPosition().x, 615));
					m_pReel2->toggleSpin();
				}
				else if (temp == "Orange")
				{
					m_pReel2->setPosition(glm::vec2(m_pReel1->getPosition().x, 515));
					m_pReel2->toggleSpin();
				}
				else if (temp == "Cherry")
				{
					m_pReel2->setPosition(glm::vec2(m_pReel1->getPosition().x, 415));
					m_pReel2->toggleSpin();
				}
				else if (temp == "Bar")
				{
					m_pReel2->setPosition(glm::vec2(m_pReel1->getPosition().x, 305));
					m_pReel2->toggleSpin();
				}
				else if (temp == "Bell")
				{
					m_pReel2->setPosition(glm::vec2(m_pReel1->getPosition().x, 190));
					m_pReel2->toggleSpin();
				}
				else if (temp == "Seven")
				{
					m_pReel2->setPosition(glm::vec2(m_pReel1->getPosition().x, 85));
					m_pReel2->toggleSpin();
				}


				temp = m_slotMachine->getThirdOutcome();
				if (temp == "blank")
				{
					m_pReel3->setPosition(glm::vec2(m_pReel1->getPosition().x, -20));
					m_pReel3->toggleSpin();
				}
				else if (temp == "Grapes")
				{
					m_pReel3->setPosition(glm::vec2(m_pReel1->getPosition().x, 715));
					m_pReel3->toggleSpin();
				}
				else if (temp == "Banana")
				{
					m_pReel3->setPosition(glm::vec2(m_pReel1->getPosition().x, 615));
					m_pReel3->toggleSpin();
				}
				else if (temp == "Orange")
				{
					m_pReel3->setPosition(glm::vec2(m_pReel1->getPosition().x, 515));
					m_pReel3->toggleSpin();
				}
				else if (temp == "Cherry")
				{
					m_pReel3->setPosition(glm::vec2(m_pReel1->getPosition().x, 415));
					m_pReel3->toggleSpin();
				}
				else if (temp == "Bar")
				{
					m_pReel3->setPosition(glm::vec2(m_pReel1->getPosition().x, 305));
					m_pReel3->toggleSpin();
				}
				else if (temp == "Bell")
				{
					m_pReel3->setPosition(glm::vec2(m_pReel1->getPosition().x, 190));
					m_pReel3->toggleSpin();
				}
				else if (temp == "Seven")
				{
					m_pReel3->setPosition(glm::vec2(m_pReel1->getPosition().x, 85));
					m_pReel3->toggleSpin();
				}
				m_slotMachine->resetAfterSpin();
				m_pBetAmount->setText("Current Bet: " + m_slotMachine->getBetAmount());
				m_pCurrentBalance->setText("Current Balance : " + m_slotMachine->getPlayerMoney());
				m_pLog->setText(message);
				isSpining = false;
				isCUrrentlySpining = false;
			}
			else
			{
				i++;
			}
			
		}
	}
	
	m_pAddOne->setMousePosition(m_mousePosition);
	m_pAddOne->ButtonClick(this);

	m_pAddTwo->setMousePosition(m_mousePosition);
	m_pAddTwo->ButtonClick(this);

	m_pAddFive->setMousePosition(m_mousePosition);
	m_pAddFive->ButtonClick(this);

	m_pAddTen->setMousePosition(m_mousePosition);
	m_pAddTen->ButtonClick(this);

	m_pAddFifty->setMousePosition(m_mousePosition);
	m_pAddFifty->ButtonClick(this);

	m_pAllIn->setMousePosition(m_mousePosition);
	m_pAllIn->ButtonClick(this);

	m_pRemoveOne->setMousePosition(m_mousePosition);
	m_pRemoveOne->ButtonClick(this);

	m_pRemoveTwo->setMousePosition(m_mousePosition);
	m_pRemoveTwo->ButtonClick(this);
	
	m_pRemoveFive->setMousePosition(m_mousePosition);
	m_pRemoveFive->ButtonClick(this);

	m_pRemoveTen->setMousePosition(m_mousePosition);
	m_pRemoveTen->ButtonClick(this);

	m_pRemoveFifty->setMousePosition(m_mousePosition);
	m_pRemoveFifty->ButtonClick(this);

	m_pAllOut->setMousePosition(m_mousePosition);
	m_pAllOut->ButtonClick(this);

	m_pSpinButton->setMousePosition(m_mousePosition);
	m_pSpinButton->ButtonClick(this);

	m_pRestButton->setMousePosition(m_mousePosition);
	m_pRestButton->ButtonClick(this);

}

void Level1Scene::clean()
{
}

void Level1Scene::handleEvents()
{
	int wheel = 0;

	SDL_Event event;
	while(SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			m_mousePosition.x = event.motion.x;
			m_mousePosition.y = event.motion.y;
			break;

		case SDL_MOUSEBUTTONDOWN:
			switch(event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pAddOne->setMouseButtonClicked(true);
				m_pAddTwo->setMouseButtonClicked(true);
				m_pAddFive->setMouseButtonClicked(true);
				m_pAddTen->setMouseButtonClicked(true);
				m_pAddFifty->setMouseButtonClicked(true);
				m_pAllIn->setMouseButtonClicked(true);
				m_pRemoveOne->setMouseButtonClicked(true);
				m_pRemoveTwo->setMouseButtonClicked(true);
				m_pRemoveFive->setMouseButtonClicked(true);
				m_pRemoveTen->setMouseButtonClicked(true);
				m_pRemoveFifty->setMouseButtonClicked(true);
				m_pAllOut->setMouseButtonClicked(true);
				m_pSpinButton->setMouseButtonClicked(true);
				m_pRestButton->setMouseButtonClicked(true);
				break;
			}
		
			break;
		case SDL_MOUSEBUTTONUP:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pAddOne->setMouseButtonClicked(false);
				m_pAddTwo->setMouseButtonClicked(false);
				m_pAddFive->setMouseButtonClicked(false);
				m_pAddTen->setMouseButtonClicked(false);
				m_pAddFifty->setMouseButtonClicked(false);
				m_pAllIn->setMouseButtonClicked(false);
				m_pRemoveOne->setMouseButtonClicked(false);
				m_pRemoveTwo->setMouseButtonClicked(false);
				m_pRemoveFive->setMouseButtonClicked(false);
				m_pRemoveTen->setMouseButtonClicked(false);
				m_pRemoveFifty->setMouseButtonClicked(false);
				m_pAllOut->setMouseButtonClicked(false);
				m_pSpinButton->setMouseButtonClicked(false);
				m_pRestButton->setMouseButtonClicked(false);
				break;
			}
			break;
		case SDL_MOUSEWHEEL:
			wheel = event.wheel.y;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				TheGame::Instance()->quit();
				break;
			case SDLK_1:
				TheGame::Instance()->changeSceneState(SceneState::START_SCENE);
				break;
			case SDLK_2:
				TheGame::Instance()->changeSceneState(SceneState::END_SCENE);
				break;
			

				/************************************************************************/
			case SDLK_w:
				
				break;
			case SDLK_s:
				
				break;
			case SDLK_a:
				
				break;
			case SDLK_d:
				break;
			}
			
			break;
		case SDL_KEYUP:
			switch (event.key.keysym.sym)
			{
			case SDLK_w:
				
				break;

			case SDLK_s:
				
				break;

			case SDLK_a:
				break;
			case SDLK_d:
				break;
			}
			
			break;
		default:
			break;
		}
	}
}

void Level1Scene::start()
{
	//Reels
	m_pReel1 = new Reel();
	m_pReel2 = new Reel();
	m_pReel3 = new Reel();

	//Slot Machine Structure
	m_pHeading = new Heading();
	m_pMiddleSection = new MiddleSection();
	m_pButtonHolder = new ButtonHolder();

	//Add Buttons
	m_pAddOne = new AddOne();
	m_pAddTwo = new AddTwo();
	m_pAddFive = new AddFive();
	m_pAddTen = new AddTen();
	m_pAddFifty = new AddFifty();
	m_pAllIn = new AllIN();

	//Remove Buttons
	m_pRemoveOne = new RemoveOne();
	m_pRemoveTwo = new RemoveTwo();
	m_pRemoveFive = new RemoveFive();
	m_pRemoveTen = new RemoveTen();
	m_pRemoveFifty = new RemoveFifty();
	m_pAllOut = new AllOut();

	m_pSpinButton = new SpinButton();
	m_pRestButton = new RestButton();

	m_slotMachine = new SlotMachine();
	
	//Labels
	SDL_Color white = { 255,255,255,255 };
	m_pBetAmount = new Label("Current Bet: 0","Consolas",15,white,
		glm::vec2(320,460),0,true);

	m_pCurrentBalance= new Label("Current Balance : 1000", "Consolas", 15, white,
		glm::vec2(345, 480), 0, true);

	m_pLog= new Label("", "Consolas", 15, white,
		glm::vec2(600, 470), 0, true);

	m_pCurrentBalance->setParent(this);
	addChild(m_pCurrentBalance);

	m_pBetAmount->setParent(this);
	addChild(m_pBetAmount);

	m_pLog->setParent(this);
	addChild(m_pLog);

	isSpining = false;
	isCUrrentlySpining = false;
	
	//m_pAddOneButton = new Button("../Assets/textures/AddOneButton.png", "addOne",
		//ADD_ONE, glm::vec2(270, 590), true);
	
	addChild(m_pHeading);
	addChild(m_pMiddleSection);
	addChild(m_pButtonHolder);

	addChild(m_pSpinButton);
}



void Level1Scene::setBetAmount(int amount)
{
	if(m_slotMachine->addBet(amount))
	{
		m_pBetAmount->setText("Current Bet: " + m_slotMachine->getBetAmount());
		m_pCurrentBalance->setText("Current Balance : " + m_slotMachine->getPlayerMoney());
		m_pLog->setText(" ");
	}
	else
	{
		m_pLog->setText("Not enough balance");
	}
}

void Level1Scene::setRemoveAmount(int amount)
{
	if(m_slotMachine->removeBet(amount))
	{
		m_pBetAmount->setText("Current Bet: " + m_slotMachine->getBetAmount());
		m_pCurrentBalance->setText("Current Balance : " + m_slotMachine->getPlayerMoney());
		m_pLog->setText(" ");
	}
	else
	{
		m_pLog->setText("balance can not be in negative");
	}
}

void Level1Scene::restStats()
{
	m_slotMachine->resetAll();
	//m_pReel1->toggleSpin();
	//m_pReel2->toggleSpin();
	//m_pReel3->toggleSpin();
	m_pBetAmount->setText("Current Bet: " + m_slotMachine->getBetAmount());
	m_pCurrentBalance->setText("Current Balance : " + m_slotMachine->getPlayerMoney());
}

void Level1Scene::spin()
{
	message = m_slotMachine->spin();
	if (message != "Please select your bet") {
		isSpining = true;
	}
}

void Level1Scene::showReelSpin()
{
	

	
	
}

glm::vec2 Level1Scene::getMousePosition()
{
	return m_mousePosition;
}

