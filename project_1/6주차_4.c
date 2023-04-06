#include <stdio.h>

void main()
{
  int i = 1, j;
  while (i <= 9)
  {
    j = 1;

    printf("%d단 :\n", i);
    while (j <= 9)
    {
      printf("%d * %d = %d\n", i, j, i * j);
      j++;
    }
    i++;
  }
}