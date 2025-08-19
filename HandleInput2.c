#include "SnakeGame.h"
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

void SnakeGame::selectDifficulty() {
    system("cls");
    setColor(14); // Yellow
    cout << "\n\n\t\t=== SNAKE GAME ===\n";
    setColor(15); // White
    cout << "\n\tSelect Difficulty Level:\n";
    cout << "\t1. Easy   (Slow speed)\n";
    cout << "\t2. Medium (Normal speed)\n";
    cout << "\t3. Hard   (Fast speed)\n";
    cout << "\n\tEnter choice (1-3): ";

    cin >> difficulty;

    // Set speed based on difficulty
    switch(difficulty) {
        case 1: speed_delay = 200; break;  // Easy
        case 2: speed_delay = 120; break;  // Medium
        case 3: speed_delay = 60; break;   // Hard
        default:
            difficulty = 2;
            speed_delay = 120;
            break;
    }

    setColor(11); // Cyan
    cout << "\n\tControls: Use WASD or Arrow Keys";
    cout << "\n\tPress any key to start...";
    _getch();
}

void SnakeGame::generateFood() {
    do {
        food.x = rand() % (WIDTH - 2) + 1;
        food.y = rand() % (HEIGHT - 2) + 1;
    } while (isSnakeBody(food));
}

bool SnakeGame::isSnakeBody(const Point& p) {
    for (const Point& segment : snake) {
        if (segment == p) return true;
    }
    return false;
}

void SnakeGame::handleInput() {
    if (_kbhit()) {
        int key = _getch();

        // Check if it's an arrow key (special key prefix)
        if (key == 0 || key == 224) {
            key = _getch(); // Get the actual arrow key scan code
            switch(key) {
                case 72: // Up arrow
                    if (direction != 'D') direction = 'U';
                    break;
                case 80: // Down arrow
                    if (direction != 'U') direction = 'D';
                    break;
                case 75: // Left arrow
                    if (direction != 'R') direction = 'L';
                    break;
                case 77: // Right arrow
                    if (direction != 'L') direction = 'R';
                    break;
            }
        } else {
            // Handle regular keys (WASD and Q)
            key = toupper(key);
            switch(key) {
                case 'W': if (direction != 'D') direction = 'U'; break;
                case 'S': if (direction != 'U') direction = 'D'; break;
                case 'A': if (direction != 'R') direction = 'L'; break;
                case 'D': if (direction != 'L') direction = 'R'; break;
                case 'Q': game_over = true; break;  // quit
            }
        }
    }
}
