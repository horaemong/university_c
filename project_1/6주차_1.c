#include <stdio.h>

void main()
{
  int i = 4, j;
  for (j = 1; j <= 9; j++)
  {
    printf("%d * %d = %d\n", i, j, i * j);
  }
}