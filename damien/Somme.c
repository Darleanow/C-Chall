#include <stdio.h>

int main()
{
    int NUMBER, SUM, COUNTER;
    SUM = 0;
    COUNTER = 0;

    while (COUNTER < 4)
    {
        printf("Enter a number: ");
        scanf("%i", &NUMBER);
        SUM += NUMBER;
        COUNTER++;
    }
    printf("The sum is %i\n", SUM);
    return 0;
}
