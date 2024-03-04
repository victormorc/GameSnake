/*
 * Handler_Screen.hpp
 *
 *  Created on: Mar 2, 2024
 *      Author: victor
 */

#ifndef INCLUDE_ISCREEN_HPP_
#define INCLUDE_ISCREEN_HPP_

#include "Point.hpp"

class IScreen
{
public:

    void InitScreen() = 0;
	void PrintScreen() = 0;
	void KillScreen() = 0;

	Border GetBorderScreen() = 0;
};



#endif /* INCLUDE_ISCREEN_HPP_ */
