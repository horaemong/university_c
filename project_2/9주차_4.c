#include <stdio.h>

void main()
{
  int i[9][9];
  int j, k;
  for (j = 0; j < 9; j++)
  {
    for (k = 0; k < 9; k++)
    {
      i[j][k] = (j + 1) * (k + 1);
      printf("%d*%d=%2d  ", k + 1, j + 1, i[j][k]);
    }
    printf("\n");
  }
}