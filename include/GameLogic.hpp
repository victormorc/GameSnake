/*
 * GameRuler.hpp
 *
 *  Created on: Mar 2, 2024
 *      Author: victor
 */

#ifndef INCLUDE_GAMELOGIC_HPP_
#define INCLUDE_GAMELOGIC_HPP_

#include "Snake.hpp"
#include "Apple.hpp"
#include "IScreen.hpp"


class GameLogic
{
public:

    bool IsSnakeHitWall(Snake *snake, IScreen *screen);

    bool IsSnakeAutoEat(Snake *snake);

    bool IsSnakeEatApple(Snake *snake, Apple *apple);
};



#endif /* INCLUDE_GAMELOGIC_HPP_ */
