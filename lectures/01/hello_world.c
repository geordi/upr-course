#include <stdio.h>

int main()
{
    // one-line comments

    /*
        multi
        line
        comments
    */

    printf("Hello world!\n");
    printf("8 + 5 = %d\n", 8 + 5);

    int a = 5;
    int b = 8 + 3;
    int c = a + b;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    int counter = 5;
    while (counter > 0)
    {
        if ((counter % 2) == 0)
        {
            printf("Counter: %d (even)\n", counter);
        }
        else
        {
            printf("Counter: %d (odd)\n", counter);
        }

        counter = counter - 1;
    }
}
