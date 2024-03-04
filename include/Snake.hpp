/*
 * Snake.hpp
 *
 *  Created on: Mar 2, 2024
 *      Author: victor
 */

#ifndef INCLUDE_SNAKE_HPP_
#define INCLUDE_SNAKE_HPP_

#include <vector>
#include <tuple>
#include "Point.hpp"
#include "Movement.hpp"

using Element = std::tuple<Point, Movement>;

class Snake
{
public:

	Snake(SimplePoint init_point, Movement direction);

	void Move(Movement direction);

	std::vector<SimplePoint> GetMovement() const;

	SimplePoint GetHead() const;

	void Grow(void);

	~Snake();

private:
	std::vector<Element *> body;
	bool need_to_grow;
};


#endif /* INCLUDE_SNAKE_HPP_ */
