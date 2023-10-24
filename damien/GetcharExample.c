#include <stdio.h>

int main()
{
    printf("Salut toi, appuie sur une touche s'il te plaît\n");
    int c = getchar();
    printf("Merci d'avoir appuyé sur la touche '%c' (valeur int : %d).\n", c, c, c);
    return 0;

}