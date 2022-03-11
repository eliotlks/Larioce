#include <stdio.h>
#define SIZE 10
 
int main()
{ 
  int tab[10] = { 98, -5, -85, 11, -4, 25, 1, 40, 28, 36};
  int i, j, k;
 
   
   for (i=0; i < SIZE; ++i)
   {
       printf("tab[%d] = %d\n",i, tab[i]);
   }
 
  for (i=1 ; i <= SIZE-1; i++) {
    j = i;
 
    while (j > 0 && tab[j-1] > tab[j]) {
      k = tab[j];
      tab[j] = tab[j-1];
      tab[j-1] = k;
 
      j--;
    }
  }
 
  printf("\n====Tableau triée par ordre croissant====\n");
 
  for (i=0; i < SIZE; i++)
      printf("tab[%d] = %d\n",i, tab[i]);
 
  return 0;
}