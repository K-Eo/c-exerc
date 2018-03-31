#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Uso: e7 num\n");
    return -1;
  }

  char *number = argv[1];
  int number_length = strlen(number);
  int i;

  for(i = 0; i < number_length; i++) {
    printf("%c\n", number[i]);
  }

  return 0;
}
