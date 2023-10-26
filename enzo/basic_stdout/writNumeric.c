#include <stdio.h>

int main()
{
    printf("Press a key in your keyboard...");

    char c = getchar();

    printf("Character pressed: %c\nCharacter value: %d\n", c,c);

    return 0;
}

