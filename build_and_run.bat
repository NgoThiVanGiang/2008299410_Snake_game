@echo off
echo Compiling Snake Game...
g++ -Wall -Wextra -std=c++11 main.cpp SnakeGame.cpp -o snake_game.exe
if %errorlevel% neq 0 (
    echo Compilation failed!
    pause
    exit /b %errorlevel%
)
echo Compilation successful!
echo Running Snake Game...
snake_game.exe