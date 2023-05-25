#include <stdio.h>

void main()
{
  int sample[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%7d ", sample[i][j]);
    }
    printf("\n");
  }
}