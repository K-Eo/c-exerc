#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
  if (argc < 4) {
    printf("Uso: e8 radio generatriz altura\n");
    return -1;
  }

  float radius = atof(argv[1]);
  float slant_height = atof(argv[2]);
  float height  = atof(argv[3]);

  float base_area = M_PI * pow(radius, 2);
  float lat_area = M_PI * radius * slant_height;
  float total_area = lat_area + base_area;
  float volume = (base_area * height) / 3; 

  printf("Area: %.2f\n", base_area);
  printf("Area Lateral: %.2f\n", lat_area);
  printf("Area Total: %.2f\n", total_area);
  printf("Volumen: %.2f\n", volume);

  return 0;
}
