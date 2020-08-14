#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewater(char user, char opp)
{

    if (user == opp)

    {
        return 0; /* code */
    }

    if (user == 's' && opp == 'w')
    {
        return 1; /* code */
    }

    else if (user == 'w' && opp == 's')
    {

        return -1;
    }
    if (user == 'g' && opp == 's')
    {
        return 1; /* code */
    }
    else if (user == 's' && opp == 'g')
    {

        return -1;
    }

    if (user == 'w' && opp == 'g')
    {
        return 1; /* code */
    }

    else if (user == 'g' && opp == 'w')
    {

        return -1;
    }
}

int main()
{

    char user, opp;

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

    printf("WELCOME! \n");
    printf("Enter 's' for snake , 'w' for water and 'g' for gun: \n");
    scanf("%c", &user);
    int result = snakewater(user, opp);
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

    printf("You Choose %c and your opponent choose %c\n", user, opp);

    return 0;
}
