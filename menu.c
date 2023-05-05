#include <stdio.h>



int main() {

    
    char m1[20] = "Royal Cheese";
    char m2[20] = "Mc Deluxe";
    char m3[20] = "Mc Bacon";
    char m4[20] = "Big Mac";
    char m5[20] = "Votre choix?";
    int m6;
    int e = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    
    printf("===Menu===\n");
    printf("1.%s\n", m1);
    printf("2.%s\n", m2);
    printf("3.%s\n", m3);
    printf("4.%s\n", m4);
    printf("%s\n", m5);

    scanf("%d", &m6);
    if (m6 == a)
    printf("Vous avez choisi %s\n", m1);
    else if (m6 == b)
    printf("Vous avez choisi %s\n", m2);
    else if (m6 == c)
    printf("Vous avez choisi %s\n", m3);
    else if (m6 == d)
    printf("Vous avez choisi %s\n",m4);
    else
    printf("J'en conclu donc que t'as pas faim, va plutot te branler vu que t'as rien à faire");
    
    /*if (m6 = 1)
    printf("Vous avez choisi %s\n", m1);
    else if (m6 = 2)
    printf("Vous avez choisi %s\n", m2);
    else if (m6 = 3)
    printf("Vous avez choisi %s\n", m3);
    else if (m6 = 4)
    printf("Vous avez choisi %s\n", m4);
    else 
    printf("Un truc valide\n");*/

    return 0;
}