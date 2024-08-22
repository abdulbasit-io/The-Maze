#The Maze

![Repo License](https://img.shields.io/github/license/Alph-aine/The-Maze)
![Repo Size](https://img.shields.io/github/repo-size/Alph-aine/The-Maze)
![Last commit](https://img.shields.io/github/last-commit/Alph-aine/The-Maze)


The Maze is a 3D game that uses raycasting to render 2D map into a 3D world!  

The Maze is writtn in `C` using `SDL2` library. Development was performed on `Ubuntu 22.04 LTS`  

### About SDL2
`Simple DirectMedia Layer` is a cross-platform development library designed to provide low level access to audio, keyboard, mouse, joystick, and graphics hardware via `OpenGL` and `Direct3D`. It is used by video playback software, emulators, and popular games including Valve's award winning catalog and many Humble Bundle games.  

## Installation
```sh
$ git clone git@github.com:abdulbasit-io/The-Maze.git
```

## Usage
`w`: move up  
`s`: move down  
`d`: move left  
`a`: move right  

## Compilation
On Linux 
```sh
make linux 
```

On Mac
```sh
make mac
```

## Execution
After compilation, run the following command:

```bash
./maze MAP
```
where ```MAP``` is the name of the file found in the map folder. You can create other maps and pass them while running program as above. Map files accept only the allowed characters.

## Directories
[`src`](https://github.com/abdulbasit-io/The-Maze/tree/main/src)

Contains all source code written in C.

[`inc`](https://github.com/abdulbasit-io/The-Maze/tree/main/inc)

Contains all header files.

[`images`](https://github.com/abdulbasit-io/The-Maze/tree/main/images)

Contains all images used.

[`maps`](https://github.com/abdulbasit-io/The-Maze/tree/main/maps)

Contains the map data files.

## Screenshot
![image](https://github.com/abdulbasit-io/The-Maze/blob/dc465b2d3c8f52d7078679ee303f5cb931082a5e/images/The-Maze.png)


## Contributing

- Read the source files in ```src``` folder and the header files in ```inc``` folder.
- Clone the repo and make a new branch: `$ git checkout https://github.com/abdulbasit-io/The-Maze.git -b [name_of_new_branch].`
- Add a feature, fix a bug, or refactor some code :)
- Write/update tests for the changes you made, if necessary.
- Update README.md if necessary.
- Open a Pull Request with a comprehensive description of changes.

## Demo
![The Maze Demo](https://www.youtube.com/embed/LP8pBF223-c)

## AUTHOR
Abdulbasit Abdulrafiu <aabdulrafiu721@gmail.com>
