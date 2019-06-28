#ifndef MYCHESS_KING_H
#define MYCHESS_KING_H

#include "figure.h"

class King : public Figure
{
public:
    constexpr King(Color col, const Coord& c) : Figure{col ,c} {}
    virtual bool is_move_valid(const Coord& coord) override ;
    virtual ~King() {}
};

#endif //MYCHESS_KING_H
