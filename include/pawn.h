#ifndef MYCHESS_PAWN_H
#define MYCHESS_PAWN_H

#include "figure.h"

class Pawn : public Figure {
private:
    bool is_first_move;
    bool is_queen;
public:
    constexpr Pawn(Color col, const Coord &c, bool is_first_move) : Figure{col, c}, is_first_move{true},
                                                                    is_queen{false} {}

    virtual bool is_move_valid(const Coord &coord) override;

    virtual ~Pawn() {}
};

#endif //MYCHESS_PAWN_H
