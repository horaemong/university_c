#include <stdio.h>

void main()
{
  int a = 5, b = 10;
  int *p_1;
  p_1 = &a;
  printf("a의 주소 %d\n", &a);
  printf("p_1의 값 %d\n", *p_1);
  printf("p_1의 주소 %d\n", &p_1);
  printf("p_1의 계산 %d\n", *p_1 + b);
  *p_1 = 20;
  printf("a의 값 %d\n", a);
  printf("p_1의 다음 주소 = %d\n", ++*p_1);
}