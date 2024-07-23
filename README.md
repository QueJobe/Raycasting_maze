<h1>Raycasting Game</h1>

<h2>Introduction</h2>

<p>This project is a 3D raycasting game implemented using SDL2 on Ubuntu 14.04 LTS. It includes features like textured walls and ground/ceiling, player movement and rotation, collision detection, and map parsing. The game is built with strict coding and organizational requirements, following the Betty style guide.</p>

<h2>Features</h2>
<ul>
<li><3D Raycasting: Rendering of 3D walls using raycasting technique.</li>
<li>Player Movement: Move the player using W, A, S, D keys.</li>
<li>Camera Rotation: Rotate the camera using arrow keys or mouse movement.</li>
<li>Collision Detection: Prevent the player from walking through walls and allow sliding along walls.</li>
<li>Textured Walls and Ground/Ceiling: Add textures to walls and ground/ceiling.</li>
<li>Map Parsing: Read the map from a file with user-defined standards.</li>
<li>Map Drawing: Draw the map on the window with the player's line of sight and the ability to enable/disable it during execution.</li>
<li>Multiple Simultaneous Inputs: Handle multiple inputs for moving and rotating the player.</li>
</ul>
<h2>Requirements</h2>
  <ul>
<li>SDL2</li>
<li>gcc with the following flags: -Wall -Werror -Wextra -pedantic</li>
<li>The project must follow the Betty style guide.</li>
  </ul>
<h2>Installation</h2>
Clone the repository:

git clone <repository_url>
Navigate to the project directory:
cd raycasting_game
Compile the project:

make
Usage
Run the game with the following command:
./raycasting_game

<h2>Controls</h2>
Move Forward: W
Move Backward: S
Move Left: A
Move Right: D
Rotate Left: Left Arrow Key
Rotate Right: Right Arrow Key
Toggle Map: M

<h2>Development Guidelines</h2>
Functions should be a maximum of 40 lines and 80 columns long.
No more than 5 functions per file.
Follow the Betty style guide strictly.
Organize the repository with sources in the src directory and headers in the inc directory.

<h2>Contributing</h2>
Contributions are welcome! Please fork the repository and submit a pull request.


