#include "queen.h"

bool Queen::is_move_valid(const Coord &coord) {
    if (abs(getCoord().number - coord.number) == abs(getCoord().letter - coord.letter)) {
        return true;
    }
    else if (getCoord().letter - coord.letter == 0 & coord.number >= 1 & coord.number <= 8) {
        return true;
    }
    return false;
}
