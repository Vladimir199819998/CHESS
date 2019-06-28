#include "board.h"


Board::Board() {
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            Coord tmp{char(j + 64), short(i)};

            // initializing white figures
            if ((tmp.number == 1) & (tmp.letter == 'A' | tmp.letter == 'H')) {
                Figure *figure = new Rook(WHITE, tmp);
                cell[i-1][j-1].fig = figure;
                continue;
            }
            if ((tmp.number == 1) & (tmp.letter == 'B' | tmp.letter == 'G')) {
                Figure *figure = new Knight(WHITE, tmp);
                cell[i-1][j-1].fig = figure;
                continue;
            }
            if ((tmp.number == 1) & (tmp.letter == 'C' | tmp.letter == 'F')) {
                Figure *figure = new Bishop(WHITE, tmp);
                cell[i-1][j-1].fig = figure;
                continue;
            }
            if (tmp.number == 1 & tmp.letter == 'D') {
                Figure *figure = new Queen(WHITE, tmp);
                cell[i-1][j-1].fig = figure;
                continue;
            }
            if (tmp.number == 1 & tmp.letter == 'E') {
                Figure *figure = new King(WHITE, tmp);
                cell[i-1][j-1].fig = figure;
                continue;
            }
            if (tmp.number == 2) {
                Figure *figure = new Pawn(WHITE, tmp, true);
                cell[i-1][j-1].fig = figure;
                continue;
            }


            // initializing black figures
            if (tmp.number == 7) {
                Figure *figure = new Pawn(BLACK, tmp, true);
                cell[i-1][j-1].fig = figure;
                continue;
            }

            if ((tmp.number == 8) & (tmp.letter == 'A' | tmp.letter == 'H')) {
                Figure *figure = new Rook(BLACK, tmp);
                cell[i-1][j-1].fig = figure;
                continue;
            }
            if ((tmp.number == 8) & (tmp.letter == 'B' | tmp.letter == 'G')) {
                Figure *figure = new Knight(BLACK, tmp);
                cell[i-1][j-1].fig = figure;
                continue;
            }
            if ((tmp.number == 8) & (tmp.letter == 'C' | tmp.letter == 'F')) {
                Figure *figure = new Bishop(BLACK, tmp);
                cell[i-1][j-1].fig = figure;
                continue;
            }
            if (tmp.number == 8 & tmp.letter == 'D') {
                Figure *figure = new Queen(BLACK, tmp);
                cell[i-1][j-1].fig = figure;
                continue;
            }
            if (tmp.number == 8 & tmp.letter == 'E') {
                Figure *figure = new King(BLACK, tmp);
                cell[i-1][j-1].fig = figure;
                continue;
            }
        }
    }
}


Board::~Board() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (cell[i][j].fig != nullptr) {
                delete cell[i][j].fig;
            }
        }
    }
}
