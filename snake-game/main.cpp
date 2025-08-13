#include "SnakeGame.h"
#include <windows.h>
#include <iostream>

using namespace std;

int main() {
    SetConsoleTitleW(L"Snake Game - C++ Console Edition");
    system("mode con: cols=80 lines=30");

    SnakeGame game;
    game.run();

    return 0;
}