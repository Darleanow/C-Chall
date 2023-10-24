#include <stdio.h>


int main()
{
    char caract;

    printf("Enter char : ");
    scanf("%c", &caract);

    int ascii = (int)caract;

    printf("ASCII code of '%c' is : %d\n", caract, ascii);

    return 0;
}