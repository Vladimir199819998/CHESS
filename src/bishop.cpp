#include "bishop.h"

bool Bishop::is_move_valid(const Coord &coord) {
    if (abs(getCoord().number - coord.number) == abs(getCoord().letter - coord.letter)) {
        return true;
    }
    return false;
}

