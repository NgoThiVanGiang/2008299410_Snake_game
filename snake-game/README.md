# Snake Game - C++ Console Edition

A classic Snake game implemented in C++ with modular code structure.

## Features

- Classic Snake gameplay with score tracking
- Three difficulty levels (Easy, Medium, Hard)
- Modular code structure for easy maintenance
- Colorful console interface

## Controls

- W: Move Up
- A: Move Left
- S: Move Down
- D: Move Right
- Arrow Keys: Alternative movement controls
- Q: Quit the game

## Compilation and Running

### Method 1: Using the batch file (Windows)
```bash
build_and_run.bat
```

### Method 2: Manual compilation (Windows)
```bash
g++ -Wall -Wextra -std=c++11 main.cpp SnakeGame.cpp -o snake_game.exe
snake_game.exe
```

### Method 3: Using Makefile (if you have make installed)
```bash
make
./snake_game.exe
```

## Code Structure

- `main.cpp`: Entry point of the application
- `SnakeGame.h`: Header file containing class declaration
- `SnakeGame.cpp`: Implementation file with all game logic
- `Makefile`: For building the project with make
- `build_and_run.bat`: Windows batch file for easy compilation and execution

## Requirements

- Windows OS (due to Windows-specific console functions)
- C++ compiler (g++ recommended)