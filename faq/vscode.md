# VSCode
Visual Studio Code is an IDE (integrated development environment). IDEs
are programs that combine editor functionality (writing text/code) with
tools useful for programmers (compiling/debugging programs).

## Setup
### Installation
https://code.visualstudio.com/docs/setup/setup-overview

### Install necessary plugins (recommended)

Open up a terminal and execute the following command to install VSCode extensions:

```
code --install-extension ms-vscode.cpptools
code --install-extension vector-of-bool.cmake-tools
```

### Install necessary plugins (not recomended, clicking way)
1. Open extensions (`Ctrl+Shift+X` or execute the `Install Extensions` action)
2. Search for C/C++ -> Install
3. Search for CMake Tools -> Install

### General tips
- To execute an action in VSCode, press `Ctrl+Shift+P` and type the name of the action.

## Create build & debug configuration
1. Create a file named `CMakeLists.txt` in the root of your workspace directory:
```cmake
cmake_minimum_required(VERSION 3.0)
project(hello-world)

# this tells CMake to create an executable named `main`
# the executable will be compiled from a single source file `main.c` 
add_executable(main main.c)
```

2. A popup should show in the bottom right corner of VSCode with the following prompt:
`Would you like to configure this project?` - answer yes.
If the popup doesn't show, make sure that you have the `CMake Tools` extension installed
and restart VSCode.

3. To build the program, press `F7` (or execute the `CMake: Build` action).
4. To debug the program, press `Ctrl+F5` (or execute the `CMake: Debug Target` action).
