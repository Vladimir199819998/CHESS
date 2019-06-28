#include "knight.h"

bool Knight::is_move_valid(const Coord &coord) {
   if (abs(getCoord().number - coord.number == 2) & abs(getCoord().letter - coord.letter == 1)) {
       return true;
   }
   else if (abs(getCoord().letter - coord.letter == 2) & abs(getCoord().number - coord.number == 1)) {
       return true;
   }
   return false;
}

