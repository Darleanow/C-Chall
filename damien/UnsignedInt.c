#include <stdio.h>
#include <limits.h>

int main()
{
    int max = INT_MAX;
    unsigned int a = INT_MAX + 1;
    int b = INT_MAX + 1;
    printf("max = %i\n", max);
    printf("a = %u\n", a);
    printf("b = %i\n", b);
    return 0;
}