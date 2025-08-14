# 📝 Changelog
All notable changes to **Snake Game – C++ Console Edition** will be documented in this file. 

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/)

and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

---

## [Unreleased]
### To add
- Planned **pause/resume** feature
- New **"Insane" difficulty mode** with extra speed
- **Scoreboard** displayed after game over
- Settings menu to adjust snake color and board size

### To fix
- Minor flickering issue in console rendering
- Scoreboard alignment for wide console windows

---

## [1.1.0] - 2025-08-10
### Added
- 🎯 **Difficulty Levels**: Easy, Medium, Hard
- 🍏 Improved to avoid flashing screen when playing
- 📝 Basic in-game instructions shown at start

### Changed
- Snake movement handling is smoother with improved input buffering
- Refactored code into `.h` and `.cpp` files for better modularity

### Fixed
- Crash when restarting the game after certain key presses
- Bug where snake could move in the opposite direction instantly and collide with itself

---

## [1.0.0] - 2025-08-01
### Added
- Initial release of **Snake Game – C++ Console Edition**
- Classic snake movement with arrow keys
- Growing snake length on eating food
- Basic score counter
- Windows-specific console rendering

---

## Legend
- **Added** – New features
- **To add** – Unreleased features
- **Changed** – Changes in existing functionality
- **Fixed** – Bug fixes
- **To fix** – Unreleased fixes
- **Removed** – Features removed in this release
