#include <stdio.h>
#include <stdlib.h>

#define SECONDS_PER_DAY 60 * 60 * 24

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Uso: e6 dias\n");
    return -1;
  }

  int days = atoi(argv[1]);

  printf("%d dias -> %d segundos\n", days, days * SECONDS_PER_DAY);

  return 0;
}
