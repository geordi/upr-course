## VSCode build & debug on Linux

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
2. Open the C file and press F5.

- Clicking on a column to the left of the line number will insert a breakpoint on the
selected line (red circle).
- During debug execution, the program will stop at the selected breakpoints. When the
program is stopped, you can inspect the values of local variables and observe the function
call stack.
