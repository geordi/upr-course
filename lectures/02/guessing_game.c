#include <stdio.h>      // printf, fgets
#include <stdlib.h>     // rand, strtol

/**
 * TODO:
 * Implement a guessing game.
 *
 * When you start the program, a random number is generated.
 * The task of the user is to guess what that number is.
 * The user will repeatedly enter his guess and the program will output either "too low" or "too high" to guide the user
 * to the correct answer.
 *
 * Once the user guesses correctly, the program ends.
 *
 * Useful functions (http://www.cplusplus.com/reference/clibrary/):
 * rand - generate a (pseudo)random number
 * strtol - convert a string to an integer
 * fgets - read a line from the input to a specified string buffer
 * printf - print a string to the output
 */

/*
 * TODO: return a random number between 1 and 100 using the `rand` library function from <stdlib.h>.
 * https://xkcd.com/221/
 */
int get_random_number()
{
    return 4;
}

int main()
{
    int number = generate_number();
    char buffer[80];    // buffer that will store a line that the user entered

    while (1)
    {
        printf("I have a number in mind. Guess what it is: ");
        // TODO: read a line from the input to the `buffer` array

        // TODO: convert the line to an integer (ignore errors for now)

        // TODO: if the guess was incorrect, print too low/too high based on the entered number
        // if the guess was correct, print a happy message and end
    }
}
