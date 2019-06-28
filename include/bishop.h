#ifndef MYCHESS_BISHOP_H
#define MYCHESS_BISHOP_H

#include "figure.h"

class Bishop : public Figure
{
public:
    constexpr Bishop(Color col, const Coord& c) : Figure{col, c} {}
    virtual bool is_move_valid(const Coord& coord) override;
    virtual ~Bishop(){}
};

#endif //MYCHESS_BISHOP_H
