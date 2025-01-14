#include"../../Header/Core/GameWindowManager.h"

namespace Core {

	void GameWindowManager::initialize()
	{
		//Allocte memory for the render window object
		game_window = new RenderWindow();
		//Set up window with the configured properties
		createGameWindow();

	}


	void GameWindowManager::createGameWindow()
	{
		//Create the Window with specified dimensions and title
		game_window->create(VideoMode(game_window_width, game_window_hight), game_title);
				
	}


	bool GameWindowManager::isGameRunning()
	{
		//Return true if window is open, false if closed
		return game_window->isOpen();

	}

	void GameWindowManager::render()
	{
		//Later
	}

	RenderWindow* GameWindowManager::getGameWindow() {
		return game_window;
	}

}