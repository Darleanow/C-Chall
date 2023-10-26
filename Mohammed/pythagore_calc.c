#include <math.h>
#include <stdio.h>

float pythagore(float ab, float bc) {
    float ac = sqrt(ab*ab + bc*bc);
    return ac;
}

float pythagore2(float ac, float bc) {
    float ab = sqrt(ac*ac - bc*bc);
    return ab;
}

float pythagore3(float ac, float ab) {
    float bc = sqrt(ac*ac - ab*ab);
    return bc;
}

void main() {
    int c;
    float ab, bc, ac;
    printf("Que voulez vous calculez \n");
    printf("1. ac (hypotenuse) \n");
    printf("2. ab  \n");
    printf("3. bc  \n");
    printf("Votre choix : ");
    scanf("%d", &c);
    //switch case
    switch (c) {
        case 1:
            printf("Saisir ab : \n");
            scanf("%f \n", &ab);
            printf("Saisir bc : \n");
            scanf("%f", &bc);
            printf("ac = %.2f\n", pythagore(ab, bc));
            break;
        case 2:
            printf("Saisir ac : \n");
            scanf("%f", &ac);
            printf("Saisir bc : \n");
            scanf("%f", &bc);
            printf("ab = %.2f\n", pythagore2(ac, bc));
            break;
        case 3:
            printf("Saisir ac : \n");
            scanf("%f", &ac);
            printf("Saisir ab : \n");
            scanf("%f", &ab);
            printf("bc = %.2f\n", pythagore3(ac, ab));
            break;
        default:
            printf("Erreur");
            break;
    }
}