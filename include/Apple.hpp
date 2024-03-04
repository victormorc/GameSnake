/*
 * Apple.hpp
 *
 *  Created on: Mar 2, 2024
 *      Author: victor
 */

#ifndef INCLUDE_APPLE_HPP_
#define INCLUDE_APPLE_HPP_

#include "Point.hpp"


class Apple
{
public:

	Apple(SimplePoint init_position);

	SimplePoint operator()() const;

	void NewApple(SimplePoint new_position);

private:
	SimplePoint position;

};


#endif /* INCLUDE_APPLE_HPP_ */
