#include <stdio.h>

void main()
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < i; j++)
    {
      printf("%2s", "");
    }
    for (int k = 19; k >= 2 * i + 1; k--)
    {
      printf("★");
    }
    printf("\n");
  }
}