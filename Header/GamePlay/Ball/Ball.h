#pragma once
#include<SFML/Graphics.hpp>
//#include<string.h>

using namespace sf;
using namespace std;

namespace Gameplay
{

	class Ball 
	{
	private:
		//Properties
		float ball_speed = 0.5f;
		Vector2f velocity = Vector2f(ball_speed, ball_speed);

		Texture pong_ball_texture;
        Sprite pong_ball_sprite;

		const string texture_path = R"(D:\MyOutscal\Pong-SFML\Assets\Textures\Ball.png)"; //"D:\\MyOutscal\\Pong-SFML\\Assets\\Textures\\Ball.png"; //"D:\MyOutscal\Pong-SFML\Assets\Textures\Ball.png";

		const float scale_x = 0.06f;
		const float scale_y = 0.06f;

		const float position_x = 615.0f;
		const float position_y = 335.0f;

		void loadTexture();
		void initializeVariables();
		void move();

	public:
		Ball();

		void update();
		void render(RenderWindow* game_window);

	};


}