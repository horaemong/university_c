#include <stdio.h>

void main()
{
  int sum = 0;
  for (int i = 1; i <= 50; i++)
  {
    if (i % 2 != 0)
    {
      continue;
    }
    sum += i;
  }
  printf("1부터 50까지의 짝수의 합은 %d입니다.\n", sum);
}