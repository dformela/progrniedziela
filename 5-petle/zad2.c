//Program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010.

#include <stdio.h>

int main() {
  int x = 1;
printf("kolejna potega liczby 2: %d\n", x);
  while (x<=2010) {
    printf("  %d\n", x);
    x = x * 2;
  }
}
