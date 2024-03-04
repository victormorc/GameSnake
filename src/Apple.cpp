/*
 * Apple.cpp
 *
 *  Created on: Mar 2, 2024
 *      Author: victor
 */

#include <random>
#include "Apple.hpp"

Apple::Apple(SimplePoint init_position): position(init_position)
{
}

SimplePoint Apple::operator ()() const
{
    return position;
}

void Apple::NewApple(SimplePoint new_position)
{
    // Create a new apple.
    position.x = new_position.x;
    position.y = new_position.y;
}
