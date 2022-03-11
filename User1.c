#include <stdio.h>

int main() {
    char prenom[50];
    int age;
    char nom[20];
    char nationalite[50];
    char sm[50];

    printf("Quel est votre nom?\n");
    scanf("%s", nom);

    printf("Quel est votre prénom\n");
    scanf("%s", prenom);

    printf("Quel age avez vous?\n");
    scanf("%d", &age);

    printf("Quel est votre nationalité\n");
    scanf("%s", nationalite);

    printf("Quelle est votre situation matrimoniale\n");
    scanf("%s", sm);

    printf("Vous vous appelez %s %s \n", nom, prenom);
    printf("Vous avez %d ans\n", age);
    if (age >= 18) {
        printf("Vous etes majeur\n");
    }
    else if (age < 18)
        printf("Vous etes mineur\n");
    else if (age >= 50)
        printf("Vous etes vieux\n");
    printf("De nationalité %s et vous etes %s\n", nationalite, sm);

    return 0;
}