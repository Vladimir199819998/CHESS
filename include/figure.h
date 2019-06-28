#ifndef MYCHESS_FIGURE_H
#define MYCHESS_FIGURE_H
#include <cstdlib>

typedef struct Coord
{
    char letter;
    short number;
    Coord(char l, short num) : letter{l}, number{num} {}
} Coord;

typedef enum Color
{
    BLACK,
    WHITE
} Color;


class Figure
{
private:
    Color color;
    Coord coord;
public:
    constexpr Figure(Color col, const Coord& c) : color{col}, coord{c} {}
    virtual bool is_move_valid(const Coord& coord) = 0;
    void move(const Coord& coord) {
        this->coord.number = coord.number;
        this->coord.letter = coord.letter;
    }
    Color& getColor() {
        return this->color;
    }
    Coord& getCoord() {
        return this->coord;
    };
    virtual ~Figure(){}
};

#endif //MYCHESS_FIGURE_H
