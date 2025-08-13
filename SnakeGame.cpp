// #include "SnakeGame.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

SnakeGame::SnakeGame() {
    console_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    hideCursor();
    initGame();
}

void SnakeGame::initGame() {
    snake.clear();
    snake.push_back(Point(WIDTH/2, HEIGHT/2));
    generateFood();
    score = 0;
    game_over = false;  
    direction = 'R';  // Start moving right
    selectDifficulty();
}

void SnakeGame::updateGame() {
    Point head = snake[0];

    // Move head based on direction
    switch(direction) {
        case 'U': head.y--; break;
        case 'D': head.y++; break;
        case 'L': head.x--; break;
        case 'R': head.x++; break;
    }

    // Check wall collision
    if (head.x <= 0 || head.x >= WIDTH-1 || head.y <= 0 || head.y >= HEIGHT-1) {
        game_over = true;
        return;
    }

    // Check self collision
    if (isSnakeBody(head)) {
        game_over = true;
        return;
    }

    snake.insert(snake.begin(), head);

    // Check food collision
    if (head == food) {
        score += 10;
        generateFood();
    } else {
        snake.pop_back();
    }
}
