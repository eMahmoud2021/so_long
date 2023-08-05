# So_long
A basic 2D game where a character must collect all the collectibles and escape the map. The game uses the MiniLibX library for graphics.

# Description
You must create a basic 2D game in which a dolphin escapes Earth after eating some fish. Instead of a dolphin, fish, and the Earth, you can use any character, any collectible, and any place you want. Your project must comply with the following rules:

# Game
The player’s goal is to collect every collectible present on the map, then escape choosing the shortest possible route.
The W, A, S, and D keys must be used to move the main character.
The player should be able to move in these 4 directions: up, down, left, right.
The player should not be able to move into walls.
At every move, the current number of movements must be displayed in the shell.
You have to use a 2D view (top-down or profile).
The game doesn’t have to be real-time.
Although the given examples show a dolphin theme, you can create the world you want.
🎨 Graphic Management
Your program has to display the image in a window.
The management of your window must remain smooth (changing to another window, minimizing, and so forth).
Pressing ESC must close the window and quit the program in a clean way.
Clicking on the cross on the window’s frame must close the window and quit the program in a clean way.
The use of the images of the MiniLibX is mandatory.
# Map
The map has to be constructed with 3 components: walls, collectibles, and free space.
The map can be composed of only these 5 characters:
0 for an empty space,
1 for a wall,
C for a collectible,
E for a map exit,
P for the player’s starting position.
The map must contain at least 1 exit, 1 collectible, and 1 starting position.
The map must contain only 1 starting position and 1 exit.
The map must be rectangular.
The map must be closed/surrounded by walls. If it’s not, the program must return an error.
You don’t have to check if there’s a valid path in the map.
You must be able to parse any kind of map, as long as it respects the above rules.
If any misconfiguration of any kind is encountered in the file, the program must exit in a clean way, and return "Error\n" followed by an explicit error message of your choice.
# Usage
To compile the game, navigate to the files/ directory and run the following command:

# Make
This will generate an executable named so_long.

To launch the game, use the following command:

./so_long map.ber
map.ber is a map description file in the format *.ber.
# Features
Basic 2D game with a character, collectibles, and a map.
Player movement using W, A, S, D and arrow keys.
Collectibles must be collected to win the game.
Display of the current number of movements in the shell.
Clean window management with ESC key and window close button.
Map parsing and error handling.
