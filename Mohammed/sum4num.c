#include<stdio.h>
/* This program calculates the sum of 4 integers numbers
read from the keyboard */
void main()
{
    int NUMBER, SUM, COUNTER;

    /*Initializing the variables*/
    SUM = 0;
    COUNTER = 0;
    /*Reading the data*/
    while (COUNTER < 4)
    {
        /*Read the upcoming number*/
        printf("Enter an integer number: ");
        scanf("%d", &NUMBER);
        /*Add the number to the sum*/
        SUM = SUM + NUMBER;
        /*Increase the counter*/
        COUNTER = COUNTER + 1;
    }
    /*Print the result*/
    printf("The sum of the 4 numbers is: %d\n", SUM);
}