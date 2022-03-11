#include <stdio.h>
#define SIZE 10
 
int main()
{  
  int tab[10] = { 4, 88, 7, 10, -5, 84, 1, 60, -4, 30};
  int i, j, l, m;
 
   
   for (i=0; i < SIZE; ++i)
   {
      printf("tab[%d] = %d\n",i, tab[i]);
   }
 
  for (i=0; i < (SIZE-1); i++)
  {
    m = i;
   
    for (j=i + 1; j < SIZE; j++)
    {
      if (tab[m] > tab[j])
        m = j;
    }
    if (m != i)
    {
      l = tab[i];
      tab[i] = tab[m];
      tab[m] = l;
    }
  }
 
  printf("\n====Tableau triée par ordre croissant====\n");
 
  for (i=0; i < SIZE; i++)
      printf("tab[%d] = %d\n",i, tab[i]);
 
  return 0;
}