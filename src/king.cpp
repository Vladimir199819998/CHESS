#include "king.h"

bool King::is_move_valid(const Coord &coord) {
    if (abs(getCoord().number - coord.number == 1) & (getCoord().letter - coord.letter == 1)) {
        return true;
    }
    else if (abs(getCoord().number - coord.number == 1) & (getCoord().letter - coord.letter == 0)) {
        return true;
    }
    else if (abs(getCoord().letter - coord.letter == 1) & (getCoord().number - coord.number == 0)) {
        return true;
    }
    return false;
}

