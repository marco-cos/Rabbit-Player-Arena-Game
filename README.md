# Arena Game Simulation

## Overview

This project implements a C++ simulation of an arena-based game where **players** and **rabbits** interact in an arena, with rules governing movement, history tracking, and game events. The simulation tracks player actions, rabbit movements, and the overall history of the arena's state. The game can be played or simulated through a main loop, providing an interactive or batch-run environment. Project for UCLA CS 32 class.

The project consists of multiple classes, each responsible for a specific element of the game logic, such as the **Arena**, **Player**, **Rabbit**, and **History**. A key focus of the project is object-oriented design and the management of game state over time.

## Features

- **Arena**: Represents the 2D arena where the player and rabbits move. It tracks the position and state of all entities.
- **Player**: The main character controlled by the user, capable of moving in different directions, attacking rabbits, and interacting with the arena.
- **Rabbits**: NPCs that move independently in the arena, posing a challenge for the player.
- **History**: Keeps track of events and movements throughout the game. This includes the tracking of the player and rabbits' positions across time.
- **Game**: The main simulation loop that ties all components together, managing player input and executing the sequence of events in the arena.

## Project Structure

The project is composed of the following files:

- **Arena.cpp**: Implements the arena logic, including entity management, rabbit spawning, and game dynamics.
- **Player.cpp**: Handles the behavior and actions of the player within the game, including movement and attacks.
- **Rabbit.cpp**: Contains the logic for rabbit movement and interaction with the arena and player.
- **History.cpp**: Tracks the events in the game, maintaining a record of player and rabbit movements.
- **Game.cpp**: The entry point of the game simulation, coordinating between all components and running the game loop.
- **main.cpp**: Initializes and starts the game by invoking the appropriate classes and setting up the simulation environment.
- **utilities.cpp**: Helper functions that provide various utility operations, such as random number generation or input validation.

## How to Build and Run

### Requirements

- **C++11 or later**
- A compatible C++ compiler (e.g., `g++`, `clang`)

### Build Instructions

To compile and run the project, follow these steps:

1. Clone the repository or download the project files.
   
2. Open a terminal in the project directory.

3. Compile the project using a C++ compiler:

   ```bash
   g++ -std=c++11 main.cpp Game.cpp Arena.cpp Player.cpp Rabbit.cpp History.cpp utilities.cpp -o arena_game
   ```

4. Run the compiled executable:

   ```bash
   ./arena_game
   ```

### Gameplay Instructions

Once the game starts, you can control the player using the following inputs:

- **W**: Move up
- **A**: Move left
- **S**: Move down
- **D**: Move right
- **Q**: Quit the game

The objective is to survive in the arena while dealing with the moving rabbits.

## Code Highlights

### Arena

The **Arena** class manages the entities within the grid. It ensures that players and rabbits remain within bounds and handles interactions between them.

### Player

The **Player** class represents the user-controlled character. It includes logic for movement, attacking rabbits, and interactions with the arena grid.

### Rabbit

The **Rabbit** class governs the behavior of NPC rabbits, including movement and their interaction with the player.

### History

The **History** class maintains a timeline of events, allowing the game to track changes in the arena across multiple turns.

### Utilities

A set of utility functions used throughout the project, such as random number generation for rabbit movements.

## Future Improvements

- **Multiplayer mode**: Add support for multiple players interacting in the same arena.
- **AI Improvements**: Enhance rabbit movement logic to create a more challenging experience.
- **Power-ups**: Implement special items or abilities that players can pick up to gain advantages.
