/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>

int main()
{
  int licz1, licz2, wieksza;

   printf("Podaj pierwsza liczbe: ");
   scanf("%d", &licz1);
   printf("Podaj druga liczbe: ");
   scanf("%d", &licz2);
   if (licz1 > licz2)
     wieksza= licz1;
   else
     wieksza = licz2;
   printf("Wieksza liczba to: %d\n", wieksza);
   
   return 0;
}
