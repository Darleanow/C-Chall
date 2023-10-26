#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter two numbers !\n");
    
    printf("A: ");
    scanf("%d",&a);

    printf("B: ");
    scanf("%d", &b);

   if (a > b)
   {
      printf("A is greater than B\n");
   }
   else
   {
      printf("B is greater than A\n");
   }

    return 0;
} 
