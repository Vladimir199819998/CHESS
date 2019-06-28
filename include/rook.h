#ifndef MYCHESS_ROOK_H
#define MYCHESS_ROOK_H
#include "figure.h"

class Rook : public Figure {

public:
    constexpr Rook(Color col, const Coord& c) : Figure{col, c} {}
    virtual bool is_move_valid(const Coord& coord) override;
    virtual ~Rook(){}
};

#endif //MYCHESS_ROOK_H
