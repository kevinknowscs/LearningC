#include <stdio.h>

int main()
{
  int *pc, c;

  c = 22;
  printf("Address of c: %p\n", &c);
  printf("Value of c: %d\n", c);
  pc = &c;
  printf("Value of pc: %p\n", pc);

  return 0;
}
