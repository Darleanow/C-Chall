#include <stdio.h>

void main()
{
    int NUMBER, SUM, COUNTER;

    SUM = 0;
    COUNTER = 0;

    while (COUNTER < 4)
    {
        printf("Enter un integer :");
        scanf("%i", &NUMBER);
        SUM += NUMBER;
        COUNTER++;
    }

    printf("The sum is: %i \n", SUM);
    
}

