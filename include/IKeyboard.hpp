/*
 * HandlerKeyboard.hpp
 *
 *  Created on: Mar 2, 2024
 *      Author: victor
 */

#ifndef INCLUDE_IKEYBOARD_HPP_
#define INCLUDE_IKEYBOARD_HPP_


#include "Movement.hpp"

class IKeyBoard
{
public:

	Movement PressedKey() = 0;
private:
};


#endif /* INCLUDE_IKEYBOARD_HPP_ */
