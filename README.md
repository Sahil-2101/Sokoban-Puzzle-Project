Created by: Sahil Khatri

Created at: University of Melbourne

# Sokoban Puzzle Project

A C-based implementation of the classic Sokoban puzzle game. This project provides a terminal-based interface and challenges players to solve strategic puzzles by moving boxes to designated goals on a grid.

## Features

- **Classic Gameplay**: Faithfully recreates the original Sokoban mechanics.
- **Customizable Levels**: Supports custom level designs for endless replayability.
- **Terminal Interface**: Simple and lightweight, runs directly in the terminal.
- **Logic-Based Challenges**: Encourages strategic thinking and problem-solving.

## Prerequisites

- A C compiler (e.g., GCC, Clang)
- Compatible with Linux, macOS, or Windows (via MinGW or Cygwin)

## Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/sokoban-project.git
   cd sokoban-project
   ```

2. Compile the program:

   ```bash
   gcc sokoban.c -o sokoban
   ```

3. Run the program:

   ```bash
   ./sokoban
   ```

## Usage

- Use arrow keys to move the player character.
- Push boxes to the designated goal positions.
- Restart the level if you get stuck.

## Customizing Levels

Levels can be modified or added by editing the `levels.txt` file. Each level should follow the grid format:

```
#####
# . #
# @ #
# $ #
#####
```

Symbols:
- `#`: Wall
- `.`: Goal
- `@`: Player
- `$`: Box

## Example

Starting a game:

```bash
./sokoban
```

Sample output:

```
#####
# . #
# @ #
# $ #
#####
Move the boxes to the goals!
```

## Contributions

Contributions are welcome! Fork the repository, make your changes, and submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgements

- Sokoban Original Concept by Hiroyuki Imabayashi
- ASCII Graphics Inspiration from classic terminal games
