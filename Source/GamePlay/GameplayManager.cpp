#include "../../Header/Event/EventManager.h"

#include "../../Header/GamePlay/GmameplayManager.h"

using namespace sf;


namespace Gameplay 
{
	GameplayManager::GameplayManager(Events::EventManager* manager)
	{
		GameplayManager::initialize();
	}


	void GameplayManager::initialize()
	{
				
			ball = new Ball();
			player1 = new Paddle(player1_position_x, player1_position_y);
			player2 = new Paddle(player2_position_x, player2_position_y);

	}


	
	void GameplayManager::update()
	{
		ball->update();

		player1->update(event_manager->isKeyPressed(Keyboard::W),
			event_manager->isKeyPressed(Keyboard::S));
		player2->update(event_manager->isKeyPressed(Keyboard::Up),
			event_manager->isKeyPressed(Keyboard::Down));

	}


	void GameplayManager::render(RenderWindow* game_window)
	{
		ball->render(game_window);
		player1->render(game_window);
		player2->render(game_window);

	}



}
