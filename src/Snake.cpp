/*
 * Snake.cpp
 *
 *  Created on: Mar 2, 2024
 *      Author: victor
 */


#include "Snake.hpp"

Snake::Snake(SimplePoint init_point, Movement direction): need_to_grow(false)
{
    // Create the initial snake
    Element *head = new Element{std::make_tuple(Point{init_point}, direction)};
    this->body.push_back(head);
}

void Snake::Move(Movement direction)
{
    // Initialize the movement with the received from the user.
    Movement new_direction = direction;

    Element *new_tail = nullptr;
    if (need_to_grow)
    {
        // Create a new element to append to the body.
        // Use the latest position to create the new one.
        Element *tail = body.back();
        Element *new_tail = new Element{std::get<0>(*tail), std::get<1>(*tail)};
    }

    // Iterate over all the elements, updating its position.
    // Use the movement of the previous element to update the following.
    for (Element *el : body)
    {
        std::get<0>(*el).Update(new_direction);
        new_direction = std::get<1>(*el);
    }

    // Append the new element to the body.
    if (need_to_grow)
    {
        body.push_back(new_tail);
        need_to_grow = false;
    }
}

std::vector<SimplePoint> Snake::GetMovement()
{
    std::vector<SimplePoint> movement;

    for (Element *el : body)
    {
        movement.push_back(static_cast<SimplePoint>(std::get<0>(*el)));
    }

    return movement;
}

SimplePoint Snake::GetHead() const
{
    return static_cast<SimplePoint>(std::get<0>(*(body[0])));
}

void Snake::Grow(void)
{
    need_to_grow = true;
}

Snake::~Snake()
{
    // TODO: Change to use lambda expression
    for(Element *element : body)
    {
        delete element;
    }
}
