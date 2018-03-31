#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Uso: e3 radio");
    return 1;
  }

  float radius = atof(argv[1]);

  printf("Area: %.4f\n", M_PI * radius * radius);
  printf("Longitud: %.4f\n", 2 * M_PI * radius);

  return 0;
}
