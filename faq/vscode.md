# Visual Studio Code

Visual Studio Code (VSCode) je IDE (Integrated Development Environment, integrované vývojové prostředí).
IDE jsou programy, které kombinují funkcionalitu editoru (psaní/editace kódu) s nástroji užitečnými pro programátora (kompilace/ladění (debug) programů).

### Užitečné klávesové zkratky
- Start ladění (debug)- `F5`
- Formátování kódu - `Ctrl + Shift + I`
- Spuštění příkazu - `Ctrl + Shift + P`

## Nastavení

### Instalace

https://code.visualstudio.com/docs/setup/setup-overview

### Nainstalujte si rozšíření (plug-in) pro práci s C/C++

Otevřete termánál a spusťte následující příkazy pro instalaci rozšíření VSCode:

```
$ code --install-extension ms-vscode.cpptools
```

<!--
### Install necessary plugins (not recomended, the clicking way)
1. Open extensions (`Ctrl+Shift+X` or execute the `Install Extensions` action)
2. Search for C/C++ -> Install
3. Search for CMake Tools -> Install
-->

## Otevření a spuštění prvního projektu

1. Přidejte adresář (složku) se vzorovým projektem do VSCode
2. Otevřete soubor se zdrojovým kódem.
3. Spusťte ladění stiském klávesy `F5`.
4. Z rozbalovacého menu nahoře vyberte překladač C++ (GDB/LDB).
5. Pak zvolte akci (opět z rozalovacího menu nahoře) `gcc-9 Build and debug active file`.
6. Otevře se editor se souborem `launch.json`, který můžete zavřít (podruhé se již neotevře).
7. Stiskněte opet `F5` a program se spustí s výstupem do konzole dole.

<img src="https://raw.githubusercontent.com/geordi/upr-course/master/assets/images/vsc_first_run.gif" width="90%"/>

<!--
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
-->
