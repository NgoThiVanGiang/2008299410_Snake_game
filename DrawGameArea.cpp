void SnakeGame::drawGame() {
    gotoxy(0, 0);

    // Draw top border
    setColor(9); // Blue
    for (int i = 0; i < WIDTH; i++) cout << "#";
    cout << "\n";

    // Draw game area
    for (int y = 1; y < HEIGHT-1; y++) {
        setColor(9); // Blue border
        cout << "#";

        for (int x = 1; x < WIDTH-1; x++) {
            Point current(x, y);

            if (current == snake[0]) {
                setColor(10); // Green snake head
                cout << snake_head;
            } else if (isSnakeBody(current)) {
                setColor(2); // Dark green snake body
                cout << snake_body;
            } else if (current == food) {
                setColor(12); // Red food
                cout << food_icon;
            } else {
                cout << " ";
            }
        }

        setColor(9); // Blue border
        cout << "#\n";
    }


    // Draw score and info
    setColor(14); // Yellow
    cout << "\n\nScore: " << score;
    cout << "\t\tDifficulty: ";
    switch(difficulty) {
        case 1: cout << "Easy"; break;
        case 2: cout << "Medium"; break;
        case 3: cout << "Hard"; break;
    }
    cout << "\t\tLength: " << snake.size();

    setColor(7); // Gray
    cout << "\n\nControls: WASD or Arrow Keys\t\tPress Q to quit";

    setColor(15); // White
}
