#include"../../Header/GamePlay/Ball/Ball.h"
using namespace sf;

namespace Gameplay {


    Ball::Ball()
	{
		ball_sprite.setRadius(radius);
		ball_sprite.setPosition(position_x, position_y);

	}

	 void Ball::update()
	 {
     

	 }

	 void Ball::render(RenderWindow* game_window)
	 {

		 game_window->draw(ball_sprite);

	 }
      

}