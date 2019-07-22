## My program crashes, what should I do?
#### Address sanitizer
Address sanitizer is a tool built into the compiler that can find common memory errors:
```bash
$ gcc -fsanitize=address main.c -o main
```
When you run the program, it will print an error summary if a memory error is found.
We recommend to ALWAYS use address sanitizer when developing to find potential errors early.

#### Logging
One of the simplest ways how to debug a program is to simply print the values of variables
during the execution.

#### Debugging
- Clicking on a column to the left of the line number will insert a breakpoint on the
selected line (red circle).
- During debug execution, the program will stop at the selected breakpoints. When the
program is stopped, you can inspect the values of local variables and observe the function
call stack.
- To move to the next line, use the Step over button. This will skip over function calls,
if you instead want to go inside a function call, use the Step into button.
