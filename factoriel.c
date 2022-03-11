#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "mathématiques.h"

/*long double factoriel (long double facto) {
    
    long double i;
    long double n = facto;
        for (i = 1; i <= facto - 1; i++) {

            n = n * (facto - i);
        
        }
   
    return n;
  
}*/

int main() {
    printf("Entrez le nombre dont vous voulez le factoriel : ");
    int a;
    scanf("%d", &a);

    

    printf("Factoriel de %d = %.0Lf", a ,factoriel(a));

    
    

    return 0;
}