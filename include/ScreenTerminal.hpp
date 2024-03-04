/*
 * ScreenTerminal.hpp
 *
 *  Created on: Mar 2, 2024
 *      Author: victor
 */

#ifndef INCLUDE_SCREENTERMINAL_HPP_
#define INCLUDE_SCREENTERMINAL_HPP_

#include "IScreen.hpp"
#include "IKeyboard.hpp"
#include <ncurses.h>

class ScreenTerminal: IScreen, IKeyBoard
{
public:
    ScreenTerminal();

    void InitScreen() override;
    void PrintScreen() override;
    void KillScreen() override;

    Movement PressedKey() override;

private:
    // All ncurses variables goes in here.
};


#endif /* INCLUDE_SCREENTERMINAL_HPP_ */
