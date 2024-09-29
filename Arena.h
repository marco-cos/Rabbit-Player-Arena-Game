#ifndef ARENA
#define ARENA
#include "globals.h"
#include "History.h"
#include <iostream>
using namespace std;
class Player;
class Rabbit;
class Arena
{
public:
    // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();

    // Accessors
    int rows() const;
    int cols() const;
    Player* player() const;
    int rabbitCount() const;
    int getCellStatus(int r, int c) const;
    int numberOfRabbitsAt(int r, int c) const;
    void display(string msg) const;

    // Mutators
    void setCellStatus(int r, int c, int status);
    bool addRabbit(int r, int c);
    bool addPlayer(int r, int c);
    void moveRabbits();

    //History getter
    History& history();

private:
    int m_grid[MAXROWS][MAXCOLS];
    int m_rows;
    int m_cols;
    Player* m_player;
    Rabbit* m_rabbits[MAXRABBITS];
    int m_nRabbits;
    int m_turns;

    // Helper functions
    void checkPos(int r, int c, string functionName) const;
    bool isPosInBounds(int r, int c) const;

    //History object
    History hist;
};

#endif // !ARENA
