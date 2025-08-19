bool SnakeGame::isSnakeBody(const Point& p) {
    for (const Point& segment : snake) {
        if (segment == p) return true;
    }
    return false;
}
