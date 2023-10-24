#include <stdio.h>

int main()
{
    const int r = 20; 
    const float PI = 3.14159;
    const char C = ':';
    const float area = PI*r*r;
    const char v = C;

    printf("The area of the circle %c %f\n", v, area);
  
    char out = getchar();
    if (out != 10)
    {
        main();
    }

    return 0;
}
