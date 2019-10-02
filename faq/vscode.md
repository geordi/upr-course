# Visual Studio Code
Visual Studio Code (VSCode) is an IDE (integrated development environment). IDEs
are programs that combine editor functionality (writing text/code) with
tools useful for programmers (compiling/debugging programs).

### Useful shortcuts 
- Start debugging - Ctrl + F5
- Format code - Ctrl + Shift + I
- Execute action - Ctrl + Shift + P

## Setup

### Installation

https://code.visualstudio.com/docs/setup/setup-overview

### Install necessary plugins (recommended)

Open up a terminal and execute the following command to install VSCode extensions:

```
code --install-extension ms-vscode.cpptools
code --install-extension vector-of-bool.cmake-tools
```

You also need to have CMake and a C compiler installed on your (Linux) system.
If you have Ubuntu, you can install it using
```bash
sudo apt-get install cmake build-essential
```

### Install necessary plugins (not recomended, the clicking way)
1. Open extensions (`Ctrl+Shift+X` or execute the `Install Extensions` action)
2. Search for C/C++ -> Install
3. Search for CMake Tools -> Install

## Opening the first project

1. Add folder with the template in VSCode
2. A popup should show in the bottom right corner of VSCode with the following prompt:
`Would you like to configure this project?` - answer `Yes`.
3. No CMake kits available, click `Scan for Kits` button.
4. Select `GCC 7.4.0` from the drop down menu at the top of the screen.
5. Open the `hello_world.c` by double clicking the file in the Explorer on the left side.
6. Press `Ctrl + F5` to run the program in the debugging mode.
7. Select `hello_world` binary from the drop down menu.

<img src="https://raw.githubusercontent.com/geordi/upr-course/master/assets/images/vsc_first_run.gif" width="90%"/>


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
