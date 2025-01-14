#pragma once
#include<SFML/Graphics.hpp>

using namespace sf;

namespace Core {

	class GameWindowManager {

	private:
		int game_window_width = 1208;
		int game_window_hight = 720;

		std::string game_title = "SFML-Pong!";

		RenderWindow* game_window;

		void createGameWindow();
		

	public:

		void initialize();
		RenderWindow* getGameWindow();
		bool isGameRunning();
		void render();


	};




}