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
    WIDTH - 2;
    HEIGHT - 2
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










void SnakeGame::drawGame() {
    int a;
}

// Display the "Game Over" screen and handle restart/quit choice
void SnakeGame::gameOverScreen() {
    system("cls");
    setColor(12); // Red
    cout << "\n\n\t\t=== GAME OVER ===\n\n";

    setColor(14); // Set text color to yellow
    cout << "\tFinal Score: " << score << "\n";
    cout << "\tSnake Length: " << snake.size() << "\n";
    cout << "\tDifficulty: ";
    switch(difficulty) {
        case 1: cout << "Easy"; break;
        case 2: cout << "Medium"; break;
        case 3: cout << "Hard"; break;
    }
    cout << "\n\n";

    setColor(15); // White
    cout << "\tPress R to restart or Q to quit: ";

    char choice;
    do {
        choice = toupper(_getch()); // Capture key without requiring Enter, convert to uppercase
    } while (choice != 'R' && choice != 'Q');

    if (choice == 'R') {
        initGame();  // Restart the game
    } else {
        exit(0);     // Quit the program
    }
}

// Main game loop
void SnakeGame::run() {
    srand((unsigned)time(0));
    while (true) {
        if (!game_over) {
            handleInput();
            updateGame();
            drawGame();
            Sleep(speed_delay);
        } else {
            gameOverScreen();
        }
    }
}

// Change console text color
void SnakeGame::setColor(int color) {
    SetConsoleTextAttribute(console_handle, color);
}

// Move console cursor to (x, y) position
void SnakeGame::gotoxy(int x, int y) {
    COORD coord = {short(x), short(y)};
    SetConsoleCursorPosition(console_handle, coord);
}

// Hide the blinking console cursor (for a cleaner game display)
void SnakeGame::hideCursor() {
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(console_handle, &cursorInfo); // Get current cursor info
    cursorInfo.bVisible = false; // Set visibility to false
    SetConsoleCursorInfo(console_handle, &cursorInfo); // Apply changes
}
