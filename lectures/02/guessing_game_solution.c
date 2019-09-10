#include <stdio.h>
#include <stdlib.h>

int get_random_number()
{
    return rand();
}

int main()
{
    int number = generate_number();
    char buffer[80];

    while (1)
    {
        printf("I have a number in mind. Guess what it is: ");
        if (fgets(buffer, sizeof(buffer), stdin))
        {
            int guess = strtol(buffer, NULL, 10);
            if (guess == number)
            {
                printf("You are correct! I was thinking of %d\n", guess);
                break;
            }
            else if (guess < number)
            {
                printf("I'm thinking of a larger number\n");
            }
            else
            {
                printf("I'm thinking of a smaller number\n");
            }
        }
        else
        {
            printf("You have not entered a correct guess\n");
        }
    }
}
