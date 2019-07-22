## VSCode tutorial
### General tips
To execute an action in VSCode, press `Ctrl+Shift+P` and type the name of the action.

### Install necessary plugins
1. Open extensions (`Ctrl+Shift+X` or execute the `Install Extensions` action)
2. Search for C/C++ -> Install
3. Search for CMake Tools -> Install

## Create build & debug configuration
#### Using CMake (recommended)
1. Create `CMakeLists.txt` file in the root of your workspace directory:
```cmake
cmake_minimum_required(VERSION 3.0)
project(hello-world)

# our executable is called main and has a single source file main.c
add_executable(main main.c)
```

2. A popup should show in the bottom right corner of VSCode with the following prompt:
`Would you like to configure this project?` - answer yes.
(if the popup doesn't show, make sure that you have the `CMake Tools` extension installed)
and close/reopen VSCode.

3. To build the program, press `F7` (or execute the `CMake: Build` action).
4. To debug the program, press `Ctrl+F5` (or execute the `CMake: Debug Target` action).

#### Using VSCode directly
### Build configuration
1. Create and open `.vscode/tasks.json` (using terminal or VSCode GUI).
```bash
$ mkdir -p .vscode
$ gedit .vscode/tasks.json
```

2. Paste the following content into the file:
```json5
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build",
            "type": "shell",
            "command": "gcc", // use the GCC compiler
            "args": [
              "${file}",  // compile the currently opened file
              "-g",       // include debugging information
              "-o",       // specify name of the compiled executable
              "${fileBasenameNoExtension}"
            ],
            "group":  {
              "kind": "build",
              "isDefault": true
            },
            "presentation": {
                "reveal": "always",
                "panel": "new"
            }
        }
    ]
}
```

3. Open the C file in VSCode and press `Ctrl+Shift+B` (or Terminal > Run Build Task). This will compile the file
and show potential errors in the VSCode terminal.

### Debug configuration
1. Create and open `.vscode/launch.json` and paste the following content into it:
```json5
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "debug",
            "preLaunchTask": "build",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "/usr/bin/gdb"
        }
    ]
}
```
2. Open the C file and press F5 to start debugging.
