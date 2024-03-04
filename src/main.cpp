/*
 * main.cpp
 *
 *  Created on: Mar 2, 2024
 *      Author: victor
 */


#include <signal.h>
#include <random>
#include "GameLogic.hpp"
#include "ScreenTerminal.hpp"


int main(int argc, char *argv[])
{
	// Handlers for signals.

	// Initialize the logic of the game.
    GameLogic game{};

    Snake *snake = new Snake{};
    Apple *apple = new Apple{};

    ScreenTerminal *screen = new ScreenTerminal{};

	// Call in an infinite loop the handlers for screen and keyboard
	for(;;)
	{
	    // Move snake. Get pressed key from keyboard
	    snake->Move(screen->PressedKey());

	    // Verify movement is OK. Snake does not eat itself or hit the outer wall.
	    if (game.IsSnakeHitWall(snake, screen) || game.IsSnakeAutoEat(snake))
	    {

	    }
	    // In case the movement is ok, update the screen (print it).


	    // Otherwise, set the DEAD SCREEN to reboot the game or finish it.
	}

	return 0;
}
