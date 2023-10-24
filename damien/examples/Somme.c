// This function takes in two integers and returns their sum.
// Parameters:
//   a - the first integer to be added
//   b - the second integer to be added
// Returns:
//   The sum of a and b
int add(int a, int b) {
    return a + b;
}

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
