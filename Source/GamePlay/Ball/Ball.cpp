#include"../../Header/GamePlay/Ball/Ball.h"
using namespace sf;

namespace Gameplay {


   Ball::Ball()
	{
		//pong_ball_sprite.setRadius(radius);
		//pong_ball_sprite.setPosition(position_x, position_y);
	   loadTexture();
	   initializeVariables();

	}

	void Ball::initializeVariables()
	{
		pong_ball_sprite.setTexture(pong_ball_texture);  // Link texture to sprite
		pong_ball_sprite.setScale(scale_x, scale_y);     // Set size
		pong_ball_sprite.setPosition(position_x, position_y); // Set position
	}



	void Ball::loadTexture()
	{
		/*if (!pong_ball_texture.loadFromFile(texture_path))
		{
			throw std::runtime_error("Failed to load ball texture!");
		}*/
		pong_ball_texture.loadFromFile(texture_path);
	}

	 void Ball::update()
	 {
     

	 }

	 void Ball::render(RenderWindow* game_window)
	 {

		 game_window->draw(pong_ball_sprite);

	 }
      

}