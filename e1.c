#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc < 3) {
    printf("Uso: e1 num1 num2\n");
    return 1;
  }

  float a = atof(argv[1]);
  float b = atof(argv[2]);

  printf("+: %d\n", a + b);
  printf("-: %d\n", a - b);
  printf("*: %d\n", a * b);

  return 0;
}
