#include <stdio.h>

void main()
{
  int a = 5, b = 10;
  int *p_1, **p_2;
  p_1 = &a;
  p_2 = &p_1;
  printf("a의 주소 %d\n", &a);
  printf("p_1의 값 %d\n", *p_1);
  printf("p_2의 값 %d\n", **p_2);
}