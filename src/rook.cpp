#include "rook.h"

bool Rook::is_move_valid(const Coord &coord) {
    if (getCoord().letter - coord.letter == 0 & coord.number <= 8 & coord.number >= 1) {
        return true;
    } else if (getCoord().number - coord.number == 0 & coord.letter >= 'A' & coord.letter <= 'H') {
        return true;
    }
    return false;
}

