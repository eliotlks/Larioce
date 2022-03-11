#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int my_strlen(char *str)
{
  int i = 0;

  for (; str[i] != '\0'; i++) {
    ;
  }
  return (i);
}

int main(int ac, char **av)
{
  printf("%d\n", my_strlen(av[1]));
  return (0);
}
