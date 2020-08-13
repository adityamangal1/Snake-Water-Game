#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewater(char you, char opp)
{

    if (you == opp)

    {
        return 0; /* code */
    }

    if (you == 's' && opp == 'w')
    {
        return 1; /* code */
    }

    else if (you == 'w' && opp == 's')
    {

        return -1;
    }
    if (you == 'g' && opp == 's')
    {
        return 1; /* code */
    }
    else if (you == 's' && opp == 'g')
    {

        return -1;
    }

    if (you == 'w' && opp == 'g')
    {
        return 1; /* code */
    }

    else if (you == 'g' && opp == 'w')
    {

        return -1;
    }
}

int main()
{

    char you, opp;

    // srand(time 0);
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        opp = 's';
    }

    if (number > 33 && number < 66)
    {
        opp = 'w';
    }
    else
    {
        opp = 'g';
    }

    int result = snakewater(you, opp);
    printf("WELCOME! \n");
    printf("Enter 's' for snake , 'w' for water and 'g' for gun: \n");
    scanf("%c", &you);
    if (result == 0)

    {

        printf("MATCH DRAW!\n");
    }
    else if (result == 1)
    {

        printf("CONGRATULATION!\n");
        printf("YOU DEFEAT YOUR OPPONENT!\n");
    }
    else
    {
        printf("YOU LOSE!\n");
        printf("BETTER LUCK NEXT TIME!\n");
        /* code */
    }

    printf("You Choose %c and your opponent choose %c\n", you, opp);

    return 0;
}
