#include <stdio.h>

int main() {
  int y, m, d;
  scanf("%4d.%2m.%2d", &y, &m, &d);
  printf("%2d-%2m-%4y", d, m, y);
  return 0;
}