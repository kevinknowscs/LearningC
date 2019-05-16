#include <stdio.h>

int main()
{
  int value1 = 10;
  int value2 = 20;
  int value3 = 30;
  int value4 = 40;

  printf("value1 address = %lu\n", (unsigned long) &value1);
  printf("value2 address = %lu\n", (unsigned long) &value2);
  printf("value3 address = %lu\n", (unsigned long) &value3);
  printf("value4 address = %lu\n", (unsigned long) &value4);

  return 0;
}

