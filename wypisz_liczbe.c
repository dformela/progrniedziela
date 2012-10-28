#include <stdio.h>
#include <math.h>

void podaj_liczbe(char *prompt, double *x);

int main() {
  double a, b;
  
  podaj_liczbe("Podaj liczbę: ", &a);
  if (a >= 0) {
  b = sqrt(a);
  printf("pierwiastek z %lf to %17.14lf\n", a, b);
  } else {
    printf("! błąd\n");
  }
  
return 0;
}

void podaj_liczbe(char *prompt, double *x)  {
  puts(prompt);
  scanf("%lf", x);
}
