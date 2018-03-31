#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define nuke(radius, power) (4 * M_PI * pow(radius, power))

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Uso: e9 radio\n");
    return 1;
  }

  float radius = atof(argv[1]);

  float area = nuke(radius, 2);
  float volume = nuke(radius, 3) / 3;

  printf("Area: %.2f\n", area);
  printf("Volume: %.2f\n", volume);

  return 0;
}
