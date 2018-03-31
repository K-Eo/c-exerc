#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc < 3) {
    printf("Uso: e2 venta pago \n");
    return 1;
  }

  float selling = atof(argv[1]);
  float paying = atof(argv[2]);

  printf("Venta: %.2f\n", selling);
  printf("Pago: %.2f\n", paying);
  printf("Cambio: %.2f\n", paying - selling);

  return 0;
}
