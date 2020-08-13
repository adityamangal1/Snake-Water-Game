#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    char opp; // opponent
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
    printf("The opponent chooses %c", opp);
    return 0;
}
