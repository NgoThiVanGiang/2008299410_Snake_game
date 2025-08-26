# 🐍 Snake Game - C++ Console Edition

A classic Snake game implemented in C++ with modular code structure.

<!-- Centered avatar -->
<pre align="center">
     ____              _       
  / ___| _ __   __ _| | _____
  \___ \| '_ \ / _` | |/ / _ \
   ___) | | | | (_| |   <  __/
  |____/|_| |_|\__,_|_|\_\___|
         S N A K E   ++
</pre>

<p align="center">
  <a href="https://www.linkedin.com/in/YOUR_LINKEDIN_ID/" target="_blank">
    <img alt="LinkedIn" src="https://img.shields.io/badge/LinkedIn-brightgreen?style=flat&logo=linkedin&logoColor=white" />
  </a>
  <a href="https://discord.gg/YOUR_INVITE" target="_blank">
    <img alt="discord" src="https://img.shields.io/badge/discord-5865F2?style=flat&logo=discord&logoColor=white" />
  </a>
  <a href="https://YOUR_CHAT_URL" target="_blank">
    <img alt="chat" src="https://img.shields.io/badge/chat-brightgreen?style=flat&logo=wechat&logoColor=white" />
  </a>
  <a href="https://github.com/NgoThiVanGiang/2008299410_Snake_game/wiki" target="_blank">
    <img alt="Documentation" src="https://img.shields.io/badge/%F0%9F%93%9A%20Documentation-555555?style=flat" />
  </a>
</p>

## 📖 Introduction
🐍 Snake Game (C++ Console Edition) 🐍

Welcom to the classic Snake game reinvented in C++, featuring a modular design, colorful console interface, and builtin customization to suit different skill levels.
This project, created as a final assignment for a Professional Skills course by Group 7, tries to replicate the  nostalgic arcade gameplay on the Windows console. It showcases:
- Authentic classic Snake mechanics with score tracking and simple yet satisfying gameplay.
- A modular code structure that cleanly separates implementation logic (SnakeGame.cpp) from declarations (SnakeGame.h) and entry point (main.cpp).
- A visually engaging interface, complete with welcome, gameplay, and gameover screens rendered in text graphics.
- Three difficulty modes: Easy, Medium, Hard; players can choose the pace and challenge that suits them.
- Flexible controls, supporting both arrow keys (↑)(↓)(←)(→) and [W][A][S][D], along with convenient options for replay or exit using [R] (restart) or [Q] (quit) after the game ends.
- Easy to access, just run SnakeGame.exe and it's ready to play, no installation needed.

## 🎮 How to Play
Once the game starts, you’ll experience:

- A welcome screen with game title and instructions.
- Gameplay begins with a snake that moves continuously. Feed it by collecting items, but avoid walls and your own tail—doing so ends the game.
- Navigate the direction where the snake head to using arrow keys (↑)(↓)(←)(→) or [W][A][S][D] keys for movement.
- After a “Game Over,” press:
[R] to restart and try again.
[Q] to quit the game.
- The number ber of food your snake ate is your point.
## 📝 Tips & Strategy
- Start Slow: if you're new to the game, begin with Easy mode to get casual familiarity with turning and edge behavior.
- Pick a Comfortable Key Layout: Some players prefer arrow keys; others find WASD more intuitive—choose what feels natural.
- Mindful Movement: Plan your path early, beware of available space. As the snake grows, maneuvering without colliding gets trickier.
- Replay and Improve: Each restart offers insight—adjust your strategy to last longer and score higher.
- Use Difficulty Gradually: Once comfortable, try Medium or Hard to increase speed and challenge.


## 🖼️ Screenshots

| 🟢 Welcome Screen | 🎮 Gameplay Screen | 💀 Gameover Screen |
|----------------|-----------------|------------------|
| ![Welcome Screen](https://res.cloudinary.com/dhmnidqyy/image/upload/v1756174018/welcome-screen_xsud4q.png) | ![Gameplay Screen](https://res.cloudinary.com/dhmnidqyy/image/upload/v1756174018/gameplay_gkfeo0.png) | ![Game Over Screen](https://res.cloudinary.com/dhmnidqyy/image/upload/v1756174018/game-over_irfvmi.png) |


## ✨ Features

- 🐍 Classic Snake gameplay with score tracking
- ⚙️ Three difficulty levels (Easy, Medium, Hard)
- 📦 Modular code structure for easy maintenance
- 🎨 Colorful console interface

## 🎮 Controls

- ⬆️ / ⬇️ / ⬅️ / ➡️  → Move the snake (Arrow keys)  
- **W / A / S / D** → Alternative movement keys  
- **R** → Restart the game after Game Over  
- **Q** → Quit the game after Game Over  

## 🚀 Compilation and Running

### 🟦 Method 1: Using the batch file (Windows)
```bash
build_and_run.bat
```
💡 Tip: Double-click the batch file or run it from the command prompt to compile and launch the game automatically!

### 🟩 Method 2: Manual compilation (Windows)
```bash
g++ -Wall -Wextra -std=c++11 main.cpp SnakeGame.cpp -o snake_game.exe
snake_game.exe
```
🔧 Note: This method gives you full control over the compilation process.

### 🟨 Method 3: Using Makefile (if you have make installed)
```bash
make ./snake_game.exe
```
🛠️ Pro Tip: Using a Makefile can simplify building larger projects with multiple files!

## 🧱 Code Structure

- `main.cpp`: Entry point of the application
- `SnakeGame.h`: Header file containing class declaration
- `SnakeGame.cpp`: Implementation file with all game logic
- `Makefile`: For building the project with make
- `build_and_run.bat`: Windows batch file for easy compilation and execution

## 💻 Requirements

- 🪟 Windows OS (due to Windows-specific console functions)
- 🧰 C++ compiler (g++ recommended)
