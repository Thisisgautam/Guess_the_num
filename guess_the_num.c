/* we are creating a simple c program in which we will have to guess
the number and the system will tell us whether we guessed it right */
#include <stdio.h>
//we need to create a random number for which we will these libraries
#include <stdlib.h>
#include <time.h>

int main()
{
    //creating a random number
    int random_num, guess, guess_count = 1;
    srand(time(0));
    random_num = rand() % 100 + 1; // we did this to set the limit to [1,100]

    /*As the num is created, now we need to create a loop that will
    run until the number is guessed also it will tell if the number we guessed
    is lower or higher and how many guesses we took */

    while (random_num != guess)
    {
        printf("Guess the number between 1 to 100 : \n");
        scanf("%d", &guess);
        if (guess > random_num)
        {
            printf("Your guess is higher!!\nYou need to enter a lower number\n");
        }
        else if (random_num > guess)
        {
            printf("Your guess is lower!!\nYou need to enter a higher number\n");
        }
        else
        {
            printf("Hurray!!!You Guessed it right\nand you guessed it in %d attempt/s", guess_count);
        }
        guess_count++;
    }

    return 0;
}