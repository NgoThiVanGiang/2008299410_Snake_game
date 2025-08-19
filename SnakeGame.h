#ifndef SNAKE_GAME_H
#define SNAKE_GAME_H

#include <vector>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>

class SnakeGame {
private:
    static const int WIDTH = 40;
    static const int HEIGHT = 20;

    struct Point {
        int x, y;
        Point(int x = 0, int y = 0) : x(x), y(y) {}
        bool operator==(const Point& other) const {
            return x == other.x && y == other.y;
        }
    };

    std::vector<Point> snake;
    Point food;
    int score;
    int difficulty;
    int speed_delay;
    bool game_over;
    char direction;
    HANDLE console_handle;

    // Upgraded ASCII symbols for better visuals
    const char snake_head = 'o'; 
    const char snake_body = '*';
    const char food_icon = '@';

    void setColor(int color);
    void gotoxy(int x, int y);
    void hideCursor();

public:
    SnakeGame();
    void initGame();
    void selectDifficulty();
    void generateFood();
    bool isSnakeBody(const Point& p);
    void handleInput();
    void updateGame();
    void drawGame();
    void gameOverScreen();
    void run();
};

#endif // SNAKE_GAME_H