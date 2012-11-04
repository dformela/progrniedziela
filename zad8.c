#include <stdio.h>
#include <math.h>
#include "helper.h"
int max3(int a, int b, int c);
int min3(int a, int b, int c);

int main() {
  int a, b, c, suma, iloczyn, max, min;
  printf("Podaj trzy liczby: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("Wczytano trzy liczby: %d, %d, %d\n", a, b, c);

  suma = a + b + c;
  printf("Suma podanych liczb to: %d\n", suma);

  iloczyn = a* b * c;
  printf("iloczyn podanych liczb to: %d\n", iloczyn);
  
  max = max3(a, b, c);
   printf("Max z podanych liczb to: %d\n", max);
  min = min3(a, b, c);
  printf("Min z podanych liczb to: %d\n", min);
return 0;
}
int max3(int a, int b, int c) {
  int m = a;
  if (m < b)
    m = b;
  if (m < c)
    m = c;
  return m;
}
int min3(int a, int b, int c) {
  int m = a;
  if (m > b)
    m = b;
  if (m > c)
    m = c;
  return m;
}
