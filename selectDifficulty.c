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
