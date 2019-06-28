#ifndef MYCHESS_QUEEN_H
#define MYCHESS_QUEEN_H
#include "figure.h"



class Queen : public Figure
{
public:
    constexpr Queen(Color col, const Coord& c) : Figure{col,c} {}
    virtual bool is_move_valid(const Coord& coord) override;
    virtual ~Queen(){}
};

#endif //MYCHESS_QUEEN_H
