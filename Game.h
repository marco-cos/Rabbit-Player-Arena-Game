#ifndef GAME
#define GAME
#include <string>
#include <iostream>
using namespace std;

class Arena;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nRabbits);
    ~Game();

    // Mutators
    void play();

private:
    Arena* m_arena;
    // Helper functions
    bool callhist;
    string takePlayerTurn();
};
#endif // !GAME
