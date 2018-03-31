#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define USD_UNIT 19

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Uso: e4 usd\n");
    return 1;
  }

  float usd = atof(argv[1]);

  printf("USD %.2f -> %.2f MXN\n", usd, usd * USD_UNIT);

  return 0;
}
