#include <stdio.h>

void main()
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = i; j < 9; j++)
    {
      printf("○");
    }
    for (int k = 1; k <= 2 * i + 1; k++)
    {
      printf("★");
    }
    printf("\n");
  }
}