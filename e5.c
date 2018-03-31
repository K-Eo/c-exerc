#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc < 5) {
    printf("Uso: e5 dis min seg cen\n");
    return -1;
  }

  float distance = atoi(argv[1]);
  float minutes = atoi(argv[2]);
  float seconds = atoi(argv[3]);
  float hundredths = atoi(argv[4]);

  float time_in_seconds = minutes * 60 + seconds + (hundredths / 100);
  float speed_in_meters_seconds = distance / time_in_seconds;
  float speed_in_km_hour = speed_in_meters_seconds * 3600 / 1000;

  printf("%f k/h\n", speed_in_km_hour);

  return 0;
}
