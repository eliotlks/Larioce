#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calcul_de_la_frequence(int nb_d_apparition, int la_taille_de_la_chaine)
{
    double freq = 0.0;

    freq = (nb_d_apparition * 100) / la_taille_de_la_chaine;
    return (freq);
}

int nombre_de_repetition(char c, char *str)
{
    int nb_de_rp = 0;

    for (int i = 0; str[i] != '\0'; i = i + 1) {
        if (c == str[i])
            nb_de_rp = nb_de_rp + 1;
    }
    return (nb_de_rp);
}

int main(int ac, char **av)
{
    printf("Entrez les caractères : ");
    char  pa[1000];
    scanf("%s",&pa);
    printf("Entrez le ou les caractères dont vous souhaitez voir la repetition et la frequence : ");
    char car[1000];
    scanf("%s",&car);
    int nb_d_apparition = 0;

    for (int i = 0; car[i] != '\0'; i = i + 1) {
        nb_d_apparition = nombre_de_repetition(car[i], pa);
        printf("Nombre de repetition de la lettre [%c] : %d.\nFrequence d'apparition : %.f%%\n", car[i], nb_d_apparition, calcul_de_la_frequence(nb_d_apparition, strlen(pa)));
    }
    return 0;
}
