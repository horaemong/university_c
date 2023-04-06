#include <stdio.h>

void main()
{
  int a, b, c = 0, d = 0;

  a = 3, b = 5;

  c = a * 7 + b;
  d = (a *= 7 + b);

  printf("a * 7 + b = %d\na *= 7 + b = %d\n", c, d);

  if (c != d)
  {
    printf("두 식의 계산 결과는 다르다.\n");
  }
  else
  {
    printf("두 식의 계산 결과는 같다.\n");
  }
}