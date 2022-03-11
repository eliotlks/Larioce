#include <stdio.h>
#define SIZE 10

int main()
{
  int tab[10] = { 78, -1, 4, 18, -74, 23, 6, 88, 26, 30};
  int i, j, k;
 
   for (i=0; i < SIZE; ++i)
   {
       printf("tab[%d] = %d\n",i, tab[i]);
   }
 
  for (i=0 ; i < SIZE-1; i++)
  {
    for (j=0 ; j < SIZE-i-1; j++)
    {
      
      if (tab[j] > tab[j+1]) 
      {
        k = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = k;
      }
    }
  }
 
  printf("\n=====Tableau triée par ordre croissant=====\n");
 
    
   for (i=0; i < SIZE; ++i)
   {
       printf("tab[%d] = %d\n",i, tab[i]);
   }
 
  return 0;
}