#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tablica[6];
  for(int i=0; i<6; i++)
    {
      scanf("%d",&tablica[i]);
    }
  printf("\n\n");
  for(int i=0; i<6; i++)
    {
      printf("%d\n",tablica[i]);
    }
  printf("\n\n");
  for(int i=5; i>=0; i--)
    {
      printf("%d\n",tablica[i]);
    }
  return 0;
}
