#ifndef MYCHESS_KNIGHT_H
#define MYCHESS_KNIGHT_H


#include "figure.h"

class Knight : public Figure
{
public:
    constexpr Knight(Color col, const Coord& c) : Figure{col, c} {}
    virtual bool is_move_valid(const Coord& coord) override ;
    virtual ~Knight() {}

};

#endif //MYCHESS_KNIGHT_H
