#include <stdio.h>

int main()
{
  int u = 50;
  int v = 60;
  int w = 70;

  printf("u = %d\n", u);
  printf("v = %d\n", v);
  printf("w = %d\n", w);

  u = v + w;
  v = w + 20;
  w = v + 100;

  printf("u = %d\n", u);
  printf("v = %d\n", v);
  printf("w = %d\n", w);
}
