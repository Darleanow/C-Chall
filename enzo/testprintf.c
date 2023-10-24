#include <stdio.h>
#include <limits.h>

int main()
{
    printf("%u\n", INT_MAX * 2);
    unsigned int intSup = INT_MAX * 2;

    printf("%d", intSup);

    return 0;
}
