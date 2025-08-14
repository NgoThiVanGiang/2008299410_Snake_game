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
