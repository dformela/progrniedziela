/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>

void wczytaj_int(char *prompt, int *x);
int main()
{
  int a, b, wieksza;
  wczytaj_int("podaj pierwsza liczbe: ", &a);
  wczytaj_int("podaj druga liczbe: ", &b);
  if (a>b) 
    wieksza=a;
 else 
   wieksza=b;
  printf("%d jest wieksze \n", wieksza);

   
   return 0;
}

void wczytaj_int(char *prompt, int *x)
{
  printf("%s", prompt);
  scanf("%d", x);

}
