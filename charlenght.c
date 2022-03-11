#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>


int my_strlen (char *str) {

    int a = 0;
    while (str[a] != '\0') {
        a++;
    }
    return a;
}

int main() {

    char ch[100];
    scanf("%s", ch);
    printf("La taillede %s est %d", ch, my_strlen(ch));
    return 0;
}


/*#include <stdio.h>
int my_strlen (char *str) {

    int a = 0;
    while (str[a] != '\0') {
        a++;
    }
    return a;
}

    int main(int argc, char * argv[]) {

        char chain[800];
        printf("La taille de %s est %d", argv[1], my_strlen(argv[1]));
        
    
      
       return 0;
    }*/




/*int minimum(int a, int b) {
    if (a < b) 
        return a;
    else
        return b;   
}*/


/*int main() {

    int tab[10] = {1,4,5,98,56,74,78,52,88,66};
    int i;
     for (i = 0; i< tab[i]; i++)
    printf("tab[%d] = %d\n",i, tab[i]);

    printf("Rangement.......\n");
    

    for (i = 0; i < tab [i]; i++)
    printf("tab[%d] = %d\n",i, minimum(tab[i], tab[i+1]));
    //do printf("tab[%d] = %d\n", i,tab[i]);
    //while (minimum(tab[i], tab [i++]) < minimum(tab[i], tab[i++]));
    

    


  

  return 0;
}*/




    
