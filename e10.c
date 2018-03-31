#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point {
  float x;
  float y;
};

struct Point parse_point(char *point_as_string);

int main(int argc, char **argv) {
  if (argc < 4) {
    printf("Uso: e10 ax,ay bx,by cx,cy\n");
    return 1;
  }

  struct Point a = parse_point(argv[1]); 
  struct Point b = parse_point(argv[2]); 
  struct Point c = parse_point(argv[3]); 

  float area = abs((a.x - c.x) * (b.y - a.y) - (a.x - b.x) * (c.y - a.y)) / 2;

  printf("Superficie: %.2f\n", area);

  return 0;
}

struct Point parse_point(char *point_as_string) {
  struct Point point;
  char *working_copy = strdup(point_as_string);
  char *token;

  token = strsep(&working_copy, ",");
  point.x = atof(token);

  token = strsep(&working_copy, ",");
  point.y = atof(token);

  return point;
}
