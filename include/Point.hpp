/*
 * Point.hpp
 *
 *  Created on: Mar 2, 2024
 *      Author: victor
 */

#ifndef INCLUDE_POINT_HPP_
#define INCLUDE_POINT_HPP_


#include "Movement.hpp"


struct SimplePoint
{
	unsigned x;
	unsigned y;
};

struct Point : SimplePoint
{
    void Update(Movement direction)
    {
        switch(direction)
        {
            case Movement::Up:
                this->y += 1;
                break;
            case Movement::Down:
                this->y -= 1;
                break;
            case Movement::Left:
                this->x -= 1;
                break;
            case Movement::Right:
                this->x += 1;
                break;
        }
    }
};


struct Border
{
    SimplePoint corner_lb;  // Corner left-bottom
    SimplePoint corner_lu;  // Corner left-up
    SimplePoint corner_rb;  // Corner right-bottom
    SimplePoint corner_ru;  // Corner right-up
};

#endif /* INCLUDE_POINT_HPP_ */
