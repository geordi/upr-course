## Building a running a simple C file
1. Create/edit the source file

`main.c`:
```
#include <stdio.h>

int main()
{
  printf("Hello world!\n");
  return 0;
}
```

2. Compile the source file into an executable
```bash
$ gcc main.c -o main
```
This compiles `main.c` and creates an executable file `main`.

3. Run the executable:
```bash
$ ./main
Hello world!
```

### Using libraries
To use a library, you need two things:
1. Location of the library header files
2. Location of the library compiled code

Let's say that we want to use a library called `foo`, which has header files in
`/usr/foo/include` and compiled code is `/usr/foo/lib/libfoo.so`.

```bash
$ gcc -o main main.c -L/usr/foo/lib/ -lfoo -I/usr/foo/include
```

This compiles the program using the library. If the library is static (the library file 
has the `.a` extension), that is all, the program can be executed right away.
If the library is dynamic/shared (the library file has the `.so` extension), we have to
provide the library file when we run our program. To check which libraries are required
by our program, we can use `ldd`:
```bash
$ ldd main
linux-vdso.so.1 (0x00007ffce73ae000)
libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f193e1af000)
/lib64/ld-linux-x86-64.so.2 (0x00007f193e7a2000)
foo => ...
```

The program requires the `foo` library. If it is installed globally, we can just
run the program and the library file will be located. If not, we have to provide it using
the `LD_LIBRARY_PATH` variable when running our program:
```bash
$ LD_LIBRARY_PATH=/usr/foo/lib ./main
```
