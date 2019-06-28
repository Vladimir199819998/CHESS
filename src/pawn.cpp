#include "pawn.h"

bool Pawn::is_move_valid(const Coord &coord) {
    switch (getColor()) {
        case WHITE:
            if ((coord.number - getCoord().number == 2) & (getCoord().letter - coord.letter == 0) & is_first_move) {
                is_first_move = false;
                return true;
            }
            else if ((coord.number - getCoord().number == 1) & (getCoord().letter - coord.letter == 0) & is_first_move) {
                is_first_move = false;
                return true;
            }

            else if ((coord.number - getCoord().number == 1) & (getCoord().letter - coord.letter == 0) & !is_first_move) {
                return true;
            }
            return false;
        case BLACK:
            if ((getCoord().number - coord.number == 2) & (getCoord().letter - coord.letter == 0) & is_first_move) {
                is_first_move = false;
                return true;
            }
            else if ((getCoord().number - coord.number == 1) & (getCoord().letter - coord.letter == 0) & is_first_move) {
                is_first_move = false;
                return true;
            }

            else if ((getCoord().number - coord.number == 1) & (getCoord().letter - coord.letter == 0) & !is_first_move) {
                return true;
            }
            return false;
    }

}