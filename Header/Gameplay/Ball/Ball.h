#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Paddle/Paddle.h"
using namespace sf;
using namespace std;

namespace Gameplay
{
    class Ball
    {
    private:
        Texture pong_ball_texture;
        Sprite pong_ball_sprite;

        string texture_path = "Assets/Sprites/Ball.png";

        const float scale_x = 0.2f;
        const float scale_y = 0.2f;

        const float position_x = 615.0f;
        const float position_y = 335.0f;

        void loadTexture();
        void initializeVariables();

    public:

        Ball();

        void update();
        void render(RenderWindow* game_window);
    };
}