#include <stdio.h>

int main()
{
    int a, b, c, aux;
    printf("Enter 2 numbers:");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        aux = a;
        a = c;
        c = aux;
    }
    else
    {
        aux = b;
        b = c;
        c = aux;
    }
    printf("%d %d %d", a, b, c);
    getch(); 
}