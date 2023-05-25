#include <stdio.h>

void sample(int a);

void main()
{
  int i = 5;
  void (*p)(int a);
  p = sample;
  p(i);
}

void sample(int a)
{
  printf("기존값에 5를 더한 결과 = %d\n", a + 5);
}
