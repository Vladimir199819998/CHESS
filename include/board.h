#ifndef MYCHESS_BOARD_H
#define MYCHESS_BOARD_H
#include "figure.h"
#include "rook.h"
#include "knight.h"
#include "bishop.h"
#include "queen.h"
#include "king.h"
#include "pawn.h"

struct Cell
{
    Figure* fig = nullptr;
};


class Board
{
private:
    Cell cell[8][8];
public:
    Board();
    bool is_cell_empty(Cell& cell);
    ~Board();
};






#endif //MYCHESS_BOARD_H
