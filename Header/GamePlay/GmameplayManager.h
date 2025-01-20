#pragma once
#include"../../Header/GamePlay/Ball/Ball.h"
#include"../../Header/GamePlay/Paddle//Paddle.h"

namespace Gameplay
{
	class GameplayManager 
	
	{
	private:
		float player1_position_x = 40.0f;
		float player1_position_y = 300.0f;

		float player2_position_x = 1210.0f;
		float player2_position_y = 300.0f;

		Ball* ball;
		Paddle* player1;
		Paddle* player2;

		void initialize();


	public:
		GameplayManager();
		void update();
		void render(RenderWindow* game_window);


    };



}