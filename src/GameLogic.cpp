/*
 * GameRuler.cpp
 *
 *  Created on: Mar 2, 2024
 *      Author: victor
 */


#include <GameLogic.hpp>


bool GameLogic::IsSnakeHitWall(Snake *snake, IScreen *screen)
{
    bool dead = false;

    Border border = screen->GetBorderScreen();
    SimplePoint head = snake->GetHead();

    dead = (border.corner_lb == head) || (border.corner_lu == head) ||
           (border.corner_rb == head) || (border.corner_ru == head);

    return dead;
}

bool GameLogic::IsSnakeAutoEat(Snake *snake)
{
    bool dead = false;

    std::vector<SimplePoint> elements = snake->GetMovement();
    for (auto it = elements.begin(); (it != elements.end()) && dead; ++it)
    {
        for (auto it2 = it+1; (it2 != elements.end()) && dead; ++it)
        {
            dead = (*it == *it2);
        }
    }

    return dead;
}

bool GameLogic::IsSnakeEatApple(Snake *snake, Apple *apple)
{
    bool apple_eaten = false;

    apple_eaten = ((*apple) == snake->GetHead());

    return apple_eaten;
}

